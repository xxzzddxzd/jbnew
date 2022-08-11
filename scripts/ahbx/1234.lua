
--[[
	游戏&脚本基本设置
]]--
local bundleID = "com.blizzard.diablo.immortal"
local GameConfig = {
	-- 0-竖屏游戏 / 1-横屏游戏
	direction = 1,
	-- 本脚本适配的屏幕像素尺寸
	screenSize = {
		width = 1536,
		height = 2048,
		factor = 1,
	},
	version = "1.0.0",
	desc = "副本无限",
	-- 默认设置
	default = {
		debug = true,
		baseDir = getImagesDir(),
		stepTouchDelay = 15,
		sceneTouchDelay = 100,
	}
}

--[[
	图像配置
]]--
local ImageConfig = {
	["1"] = {
		["1"] = {
			desc = "jyz",
			picName = "jyz.png",  leftTop = {531, 35}, searchSize = {32, 35},
		},
		["2"] = {
			desc = "gj",
			picName = "gj.png",  leftTop = {214, 1043}, searchSize = {42, 34}, touchOffset = {-150,0},
		},
		["3"] = {
			desc = "yd",
			picName = "yd.png",  leftTop = {66, 53}, searchSize = {30, 34},
		},

		


	},
}

--[[
	场景配置
]]--
local SceneConfig = {
	["p1"] = { isNeedAllClear = false, isResetAfterAllClear = true,
		steps = {
			
			-- {img = ImageConfig["1"]["1-1"], isClear = 0},
			{img = ImageConfig["1"]["1"], isClear = 0},
			{img = ImageConfig["1"]["2"], isClear = 0},
			{img = ImageConfig["1"]["3"], isClear = 0},
			-- {img = ImageConfig["1"]["4"], isClear = 0},
			-- {img = ImageConfig["1"]["5"], isClear = 0},
			-- {img = ImageConfig["1"]["6"], isClear = 0},
			-- {img = ImageConfig["1"]["7"], isClear = 0},

		},
	},
}
local fangxiang=0
--[[
	以下为脚本执行固定逻辑，请勿修改
]]--

local function print(msg)
	if GameConfig.default.debug then
		lPrint(msg)
	end
end

local function initialize()
	-- setScreenDirection(GameConfig.direction)
	-- setScreenSize(GameConfig.screenSize.width, GameConfig.screenSize.height)
end

local function sendTouchEvent(x, y, delay, repeating)
	for i = 1, repeating do
		touchDown(1, x, y)
		mSleep(delay)
		touchUp(1)
		mSleep(200)
	end
end

local function swipleft()
	if fangxiang == 0 then
		touchDown(1, 320, 880)
		mSleep(100)
		touchMove(1, 320, 480)
		mSleep(3000)
		touchUp(1)
		fangxiang=1
	else
		touchDown(1, 320, 480)
		mSleep(100)
		touchMove(1, 320, 880)
		mSleep(3000)
		touchUp(1)
		fangxiang=0
	end
end


local function findImage(img)
	print("findImage img.desc = " .. (img.desc or ""))
	local factor = GameConfig.screenSize.factor or 1
	local imgPath = GameConfig.default.baseDir .. img.picName
	local lt = {img.leftTop[1] * factor, img.leftTop[2] * factor}
	local size = {img.searchSize[1] * factor, img.searchSize[2] * factor}
	captureScreen()
	local x, y = findImageInRegion(imgPath, lt[1], lt[2], lt[1] + size[1], lt[2] + size[2])
	print(string.format("    x = %d, y = %d", x, y))
	return x, y
end

local function checkOutStep(index, step)
	print("checkOutStep step index = " .. tostring(index))
	local nextScene = false
	local x, y = 0, 0
	local count = step.count or 1
	local repeating = step.repeating or 1
	local touchDelay = step.delay or GameConfig.default.stepTouchDelay
	local factor = GameConfig.screenSize.factor or 1

	if step.touchPos then
		-- 直接模拟触摸, 考虑偏移
		local offset = step.offset or {0, 0}
		offset = {offset[1] * factor, offset[2] * factor}
		for i = 0, count - 1 do
			x, y = step.touchPos[1] + offset[1] * i, step.touchPos[2] + offset[2] * i
			sendTouchEvent(x, y, touchDelay, repeating)
		end
	elseif step.img then
		-- 图像识别再执行模拟触摸
		local img = step.img
		local touchOffset = img.touchOffset or {0, 0}
		touchOffset = {touchOffset[1] * factor, touchOffset[2] * factor}
		x, y = findImage(img)
		if x >= 0 and y >= 0 then
			if img == ImageConfig["1"]["3"] then
				swipleft()
			else
				-- 找到了图片, 加上触摸偏移, 执行触摸
				x, y = x + touchOffset[1], y + touchOffset[2]
				sendTouchEvent(x, y, touchDelay, repeating)
				-- 返回下一步跳转的场景(如果有的话)
				step.isClear = true;
				nextScene = step.next or false
			end
		end
	end

	return nextScene
end

local function checkOutScene(scene)
	print("checkOutScene scene = " .. scene)
	local nextScene = false
	for index, step in pairs(SceneConfig[scene].steps) do
		nextScene = checkOutStep(index, step)
		-- 如果该步骤需要跳转, 则结束steps遍历, 返回下一跳转场景
		if nextScene then
			break
		end
	end
	-- end
	return nextScene
end

local function castskill()
	sendTouchEvent(500, 2400, 15, 1)  -- skill4
	sendTouchEvent(200, 2050, 15, 1)  -- skill1
	-- sendTouchEvent(350, 2050, 15, 1)  -- skill2
	-- sendTouchEvent(200, 2050, 15, 1)  -- skill1
	sendTouchEvent(500, 2222, 15, 1)  -- skill3
	-- sendTouchEvent(200, 2050, 15, 1)  -- skill1
	sendTouchEvent(500, 2400, 15, 1)  -- skill4
end
local function castpotion()
	sendTouchEvent(670, 2380, 15, 1)
end
local function castattack()
	sendTouchEvent(270, 2300, 15, 5)
end
local function castloot()
	sendTouchEvent(600, 1960, 15, 3)
end
-- typedef enum{
--     X5_LOG_TYPE_MIN = 0,
--     X5_LOG_TYPE_LUAMANAGER,
--     X5_LOG_TYPE_OPENCV,
--     X5_LOG_TYPE_BACKBOARDD,
--     X5_LOG_TYPE_LUA,
--     X5_LOG_TYPE_SIMTOUCH,
--     X5_LOG_TYPE_MAX
-- }X5_LOG_TYPE;

function main()
	initialize()
	-- lLogParaSet(1,1);   -- luaManager
	-- lLogParaSet(2,1);   --
	-- lLogParaSet(3,1);
	-- lLogParaSet(4,1);   -- luarun
	-- lLogParaSet(5,1);   -- simTouch
	
	-- fileRenameAndDelete(bundleID, "/Library/Preferences/jp.colopl.bgirl.plist");

	launchByID(bundleID);
	mSleep(1000)
	-- execSystem("killall SKQUEST");
	local nextScene = false
	local times=0
	while isLuaRunning() ~= 0 do
		times=times+1

		-- mSleep(3000)
		-- captureScreen()
		mSleep(2000)
		castskill()
		-- castattack()
		-- castskill()
		castpotion()
		if times == 10 then
			castloot()
			times=0
		end

		-- if nextScene == false then
		-- 	-- 如果没有下一可执行场景, 则遍历所有场景查找满足条件确定下一执行场景
		-- 	for scene, _ in pairs(SceneConfig) do
		-- 		nextScene = checkOutScene(scene)
		-- 		-- 有场景条件满足, 退出遍历
		-- 		if nextScene then
		-- 			break
		-- 		end
		-- 	end
		-- else
		-- 	-- 有下一可执行场景, 检查条件并执行steps
		-- 	nextScene = checkOutScene(nextScene)
		-- end
		-- 场景之间执行间隙, 避免CPU使用率过高
		
	end
end