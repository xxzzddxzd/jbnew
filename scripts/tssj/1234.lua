
--[[
	游戏&脚本基本设置
]]--
local bundleID = "air.com.gamania.worldflipper"
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
		sceneTouchDelay = 3000,
	}
}
local function initialize()
	-- setScreenDirection(GameConfig.direction)
	-- setScreenSize(GameConfig.screenSize.width, GameConfig.screenSize.height)
end
local ImageConfig = {
	["1"] = {
		["ld"] = {
			desc = "铃铛",
			picName = "ld.png",  searchSize = {90, 75}, leftTop = {46, 156}, 
		},["fh"] = {
			desc = "返回",
			picName = "fh.png",  searchSize = {155, 45}, leftTop = {557, 1594},
		},
		["zdzld"] = {
			desc = "战斗中铃铛",
			picName = "zdzld.png",  searchSize = {38, 32}, leftTop = {87, 404}, 
		},
		["zbwc"] = {
			desc = "准备完成",
			picName = "zbwc.png",  searchSize = {162, 49}, leftTop = {397, 1804}, 
		},
		["zbwc2"] = {
			desc = "准备完成2",
			picName = "zbwc2.png",  searchSize = {163, 50}, leftTop = {401, 1787}, 
		},
		-- ["skip"] = {
		-- 	desc = "skip",
		-- 	picName = "skip.png",  searchSize = {134, 47}, leftTop = {328, 1092}, touchOffset = {0,400}
		-- },
		["xyb"] = {
			desc = "下一步",
			picName = "xyb.png",  searchSize = {122, 55}, leftTop = {560, 2287}, 
		},
		["lkfj"] = {
			desc = "离开房间",
			picName = "lkfj.png",  searchSize = {183, 42}, leftTop = {287, 2297}, 
		},
		["ok"] = {
			desc = "ok",
			picName = "ok.png",  searchSize = {151, 72}, leftTop = {551, 1633}, 
		},
		["jsok"] = {
			desc = "jsok",
			picName = "jsok.png",  searchSize = {77, 52}, leftTop = {590, 1636}, 
		},
		["zxok"] = {
			desc = "单人左下ok",
			picName = "zxok.png",  searchSize = {131, 60}, leftTop = {304, 2290}, 
		},
		["tts"] = {
			desc = "taptostart",
			picName = "tts.png",  searchSize = {98, 104}, leftTop = {417, 1837}, 
		},



		["cj"] = {
			desc = "cj",
			picName = "cj.png",  searchSize = {103, 51}, leftTop = {837, 2095}, 
		},["cj1"] = {
			desc = "cj1",
			picName = "cj1.png",  searchSize = {60,37}, leftTop = {625,310}, 
		},
		["jxjx"] = {
			desc = "jxjx",
			picName = "jxjx.png",  searchSize = {153, 53}, leftTop = {798, 1650}, 
		},
		["tlf"] = {
			desc = "体力房",
			picName = "tlf.png",  searchSize = {78, 81}, leftTop = {773, 1173}, 
		},
		["gxlb"] = {
			desc = "更新列表",
			picName = "gxlb.png",  searchSize = {60, 58}, leftTop = {1106, 644},
		},
		["boss"] = {
			desc = "boss",
			picName = "boss.png",  searchSize = {131, 61}, leftTop = {1002, 2269},
		},
		["bosspick"] = {
			desc = "bosspick",
			picName = "bosspick.png",  searchSize = {132, 58}, leftTop = {993, 2247},
		},
		["yes"] = {
			desc = "yes",
			picName = "yes.png",  searchSize = {50, 50}, leftTop = {884, 1638},
		},
		-- ["tsts"] = {
		-- 	desc = "tsts",
		-- 	picName = "tsts.png",  searchSize = {18, 20}, leftTop = {446, 1935}, 
		-- },["tsjr"] = {
		-- 	desc = "tsjr",
		-- 	picName = "tsjr.png",  searchSize = {26, 23}, leftTop = {101, 2255}
		-- },
	},
}


local SceneConfig = {
	["0_1"] ={ nextScene = "1_2", jumpFlagNext = "" , previewScene = "", jumpFlagPreview = "",
		steps = {
			{img = ImageConfig["1"]["cj"]},
			{img = ImageConfig["1"]["fh"]},
			{img = ImageConfig["1"]["cj1"]},
			-- {img = ImageConfig["1"]["ld"], next = {pos={908,2116}}},
			{img = ImageConfig["1"]["ld"], next = {pos={645,339}}},
			{img = ImageConfig["1"]["zdzld"], next = {pos={788,2307}}},
			{img = ImageConfig["1"]["zbwc"]},
			{img = ImageConfig["1"]["zbwc2"]},
			{img = ImageConfig["1"]["xyb"], repeating=30},

			{img = ImageConfig["1"]["lkfj"]},
			{img = ImageConfig["1"]["ok"]},
			{img = ImageConfig["1"]["jsok"]},
			{img = ImageConfig["1"]["zxok"]},
			{img = ImageConfig["1"]["tts"]},
			{img = ImageConfig["1"]["jxjx"]},
			{img = ImageConfig["1"]["tlf"]},
			{img = ImageConfig["1"]["gxlb"]},
			{img = ImageConfig["1"]["boss"]},
			{img = ImageConfig["1"]["bosspick"]},
			{img = ImageConfig["1"]["yes"]},
			-- {img = ImageConfig["1"]["bossqh"], next = {pos={912,1649}}},

			
			-- {img = ImageConfig["1"]["tsjs"]},
			-- {img = ImageConfig["1"]["tstj"]},
			-- {img = ImageConfig["1"]["tshq"]},
			-- {img = ImageConfig["1"]["tsts"]},
			-- {img = ImageConfig["1"]["tsjr"]},

		},
	},
}

local function print(msg)
	lPrint(msg)
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
		mSleep(300)
	end
end

local function sendTouchEventSwipdown(x, y, tox, toy)
		touchDown(1, x, y)
		mSleep(100)
		touchMove(1,tox,toy)
		mSleep(300)
		touchUp(1)
		mSleep(300)
end

local function findImage(img)
	print("findImage img.desc = " .. (img.desc or ""))
	local factor = GameConfig.screenSize.factor or 1
	local imgPath = GameConfig.default.baseDir .. img.picName
	local lt = {img.leftTop[1] * factor, img.leftTop[2] * factor}
	local size = {img.searchSize[1] * factor, img.searchSize[2] * factor}
	captureScreen()
	local x, y = findImageInRegion(imgPath, lt[1], lt[2], lt[1] + size[1], lt[2] + size[2])
	-- print(string.format("    x = %d, y = %d", x, y))
	return x, y
end

local function checkOutStep(index, step)

	if step.execOnce == true and step.isClear == 1 then
		return step.next or false
	end

	-- print("checkOutStep step index = " .. tostring(index))
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
			-- 找到了图片, 加上触摸偏移, 执行触摸
			x, y = x + touchOffset[1], y + touchOffset[2]
			sendTouchEvent(x, y, touchDelay, repeating)
			if step.next then
				mSleep(200)
				local offset = step.next.offset or {0, 0}
				offset = {offset[1] * factor, offset[2] * factor}
				x, y = step.next.pos[1] + offset[1], step.next.pos[2] + offset[2]
				delay = step.next.delay or 1000
				sendTouchEvent(x, y, delay, repeating)
			end

			-- mSleep(GameConfig.default.sceneTouchDelay)
			-- 返回下一步跳转的场景(如果有的话)
			if step.execOnce == true then
				step.isClear = 1;
			end
			if step.isJumpFlag == true then
				nextScene = true
			end
			if step.isResetFlag == true then
				reset = true
			end

		end
	end

	return nextScene
end

local function checkOutScene(scene)
	print("**************************")
	print("**************************")
	print("**************************")
	print("**************************")
	print("阶段转换 " .. scene)
	print("**************************")
	print("**************************")
	print("**************************")
	local isJump = false;
	local nextScene = false;
	while isLuaRunning() ~= 0 do
		mSleep(1000)
		setBrightness()
		-- print("***********休眠完毕开始一轮FOR循环***************")
		for index, step in pairs(SceneConfig[scene].steps) do
			isJump = checkOutStep(index, step)
			-- 如果该步骤需要跳转, 则结束steps遍历, 返回下一跳转场景
			if isJump then
				nextScene = SceneConfig[scene].nextScene
				break
			end
		end
		if isJump then
			break
		end

		if reset then
			nextScene = "0_1"
			break
		end
	end
	-- end
	return nextScene
end
function resetAllFlag()
	for scene , _ in pairs(SceneConfig) do
		print("checkOut scene = " .. tostring(scene) )
		for _ , step in pairs(SceneConfig[scene].steps) do
			if step.img == nil then
			else

				print("checkOutStep step index = " .. (step.img.desc or ""))
				if step.execOnce == true then
					step.isClear = 0
				end
			end
		end
	end

end
function main()
	initialize()
	lLogParaSet(1,1);   -- X5_LOG_TYPE_LUAMANAGER
	lLogParaSet(2,1);   --X5_LOG_TYPE_OPENCV
	lLogParaSet(3,1);   --X5_LOG_TYPE_BACKBOARDD
	lLogParaSet(4,1);   --X5_LOG_TYPE_LUA
	lLogParaSet(5,1);   --X5_LOG_TYPE_SIMTOUCH
	launchByID(bundleID);
	reset = 1
	local nextScene = false
	while isLuaRunning() ~= 0 do
		if reset then
			
			-- execSystem("killall destiny")
			-- mSleep(2000)
			-- fileRenameAndDelete(bundleID,"com.netmarble.destiny.plist");
			-- mSleep(2000)
			reset = false
			resetAllFlag()
			nextScene = "0_1"
			launchByID(bundleID);

			-- reset = false
			-- resetAllFlag()
			-- nextScene = "2_3"
		end
		setBrightness()
		mSleep(1000)
		nextScene = checkOutScene(nextScene)
		if nextScene == false or nextScene == "END" then
			return
		end
	end
end