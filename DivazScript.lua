local Players = game:GetService("Players")
local StarterGui = game:GetService("StarterGui")
local CoreGui = game:GetService("CoreGui")
local LocalPlayer = Players.LocalPlayer

local Junkie = loadstring(game:HttpGet("https://jnkie.com/sdk/library.lua"))()
Junkie.service = "WietHubKey"
Junkie.identifier = "1140271"
Junkie.provider = "Wiet Hub Key System"

local SAVE_KEY_TO_DEVICE = true
local SAVE_FILE_NAME = "junkie_script_key.txt"

local ScreenGui = Instance.new("ScreenGui")
local MainFrame = Instance.new("Frame")
local TitleLabel = Instance.new("TextLabel")
local KeyTextBox = Instance.new("TextBox")
local SubmitButton = Instance.new("TextButton")
local StatusLabel = Instance.new("TextLabel")
local CloseButton = Instance.new("TextButton")
local CopyKeyLinkButton = Instance.new("TextButton")

ScreenGui.Name = "CustomJunkieKeyUI"
ScreenGui.Parent = CoreGui
ScreenGui.ResetOnSpawn = false
ScreenGui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

MainFrame.Name = "MainFrame"
MainFrame.Parent = ScreenGui
MainFrame.BackgroundColor3 = Color3.fromRGB(30, 30, 35)
MainFrame.BorderColor3 = Color3.fromRGB(60, 60, 70)
MainFrame.BorderSizePixel = 1
MainFrame.Position = UDim2.new(0.5, -150, 0.5, -120)
MainFrame.Size = UDim2.new(0, 300, 0, 240)
MainFrame.Active = true
MainFrame.Draggable = true

TitleLabel.Name = "TitleLabel"
TitleLabel.Parent = MainFrame
TitleLabel.BackgroundTransparency = 1
TitleLabel.Position = UDim2.new(0, 0, 0, 10)
TitleLabel.Size = UDim2.new(1, 0, 0, 30)
TitleLabel.Font = Enum.Font.GothamBold
TitleLabel.Text = "Junkie Key System"
TitleLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
TitleLabel.TextSize = 16

CloseButton.Name = "CloseButton"
CloseButton.Parent = MainFrame
CloseButton.BackgroundColor3 = Color3.fromRGB(200, 50, 50)
CloseButton.Position = UDim2.new(1, -30, 0, 5)
CloseButton.Size = UDim2.new(0, 25, 0, 25)
CloseButton.Font = Enum.Font.GothamBold
CloseButton.Text = "X"
CloseButton.TextColor3 = Color3.fromRGB(255, 255, 255)
CloseButton.TextSize = 12

CopyKeyLinkButton.Name = "CopyKeyLinkButton"
CopyKeyLinkButton.Parent = MainFrame
CopyKeyLinkButton.BackgroundColor3 = Color3.fromRGB(45, 45, 55)
CopyKeyLinkButton.Position = UDim2.new(0.1, 0, 0.2, 10)
CopyKeyLinkButton.Size = UDim2.new(0.8, 0, 0, 30)
CopyKeyLinkButton.Font = Enum.Font.Gotham
CopyKeyLinkButton.Text = "Copy Key Link"
CopyKeyLinkButton.TextColor3 = Color3.fromRGB(200, 200, 255)
CopyKeyLinkButton.TextSize = 12

KeyTextBox.Name = "KeyTextBox"
KeyTextBox.Parent = MainFrame
KeyTextBox.BackgroundColor3 = Color3.fromRGB(40, 40, 50)
KeyTextBox.ClearTextOnFocus = false
KeyTextBox.Position = UDim2.new(0.1, 0, 0.38, 0)
KeyTextBox.Size = UDim2.new(0.8, 0, 0, 40)
KeyTextBox.Font = Enum.Font.Gotham
KeyTextBox.PlaceholderText = "Enter your key here..."
KeyTextBox.PlaceholderColor3 = Color3.fromRGB(120, 120, 130)
KeyTextBox.Text = ""
KeyTextBox.TextColor3 = Color3.fromRGB(255, 255, 255)
KeyTextBox.TextSize = 14
KeyTextBox.TextWrapped = true

SubmitButton.Name = "SubmitButton"
SubmitButton.Parent = MainFrame
SubmitButton.BackgroundColor3 = Color3.fromRGB(50, 150, 255)
SubmitButton.Position = UDim2.new(0.1, 0, 0.62, 0)
SubmitButton.Size = UDim2.new(0.8, 0, 0, 35)
SubmitButton.Font = Enum.Font.GothamBold
SubmitButton.Text = "Verify Key"
SubmitButton.TextColor3 = Color3.fromRGB(255, 255, 255)
SubmitButton.TextSize = 14

StatusLabel.Name = "StatusLabel"
StatusLabel.Parent = MainFrame
StatusLabel.BackgroundTransparency = 1
StatusLabel.Position = UDim2.new(0, 0, 0.82, 0)
StatusLabel.Size = UDim2.new(1, 0, 0, 40)
StatusLabel.Font = Enum.Font.Gotham
StatusLabel.Text = "Enter your key to continue."
StatusLabel.TextColor3 = Color3.fromRGB(180, 180, 190)
StatusLabel.TextSize = 12
StatusLabel.TextWrapped = true

local function notify(title, text, duration)
	pcall(function()
		StarterGui:SetCore("SendNotification", {
			Title = title,
			Text = text,
			Duration = duration or 3
		})
	end)
end

local function loadSavedKey()
	if not SAVE_KEY_TO_DEVICE then return nil end
	local success, saved = pcall(function()
		if readfile then
			return readfile(SAVE_FILE_NAME)
		elseif syn and syn.get_saved_key then
			return syn.get_saved_key(SAVE_FILE_NAME)
		end
		return nil
	end)
	return success and saved or nil
end

local function saveKey(key)
	if not SAVE_KEY_TO_DEVICE then return end
	pcall(function()
		if writefile then
			writefile(SAVE_FILE_NAME, key)
		elseif syn and syn.set_saved_key then
			syn.set_saved_key(SAVE_FILE_NAME, key)
		end
	end)
end

local function runYourCode()
	ScreenGui:Destroy()
	local success, errorMsg = pcall(function()
		local DivazScript = Instance.new("ScreenGui")
		local MainFrame = Instance.new("Frame")
		local UICorner = Instance.new("UICorner")
		local Frame = Instance.new("Frame")
		local Frame_2 = Instance.new("Frame")
		local NavBar = Instance.new("Frame")
		local CombatButton = Instance.new("TextButton")
		local UICorner_2 = Instance.new("UICorner")
		local Combat = Instance.new("TextLabel")
		local UIPadding = Instance.new("UIPadding")
		local UIListLayout = Instance.new("UIListLayout")
		local BuyButton = Instance.new("TextButton")
		local UICorner_3 = Instance.new("UICorner")
		local TextLabel = Instance.new("TextLabel")
		local FarmButton = Instance.new("TextButton")
		local UICorner_4 = Instance.new("UICorner")
		local TextLabel_2 = Instance.new("TextLabel")
		local EspButton = Instance.new("TextButton")
		local UICorner_5 = Instance.new("UICorner")
		local TextLabel_3 = Instance.new("TextLabel")
		local PlayerButton = Instance.new("TextButton")
		local UICorner_6 = Instance.new("UICorner")
		local TextLabel_4 = Instance.new("TextLabel")
		local MiscButton = Instance.new("TextButton")
		local UICorner_7 = Instance.new("UICorner")
		local TextLabel_5 = Instance.new("TextLabel")
		local Frame_3 = Instance.new("Frame")
		local TextLabel_6 = Instance.new("TextLabel")
		local UICorner_8 = Instance.new("UICorner")
		local UICorner_9 = Instance.new("UICorner")
		local RiskLabel = Instance.new("TextLabel")
		local UICorner_10 = Instance.new("UICorner")
		local VersionLabel = Instance.new("TextLabel")
		local UICorner_11 = Instance.new("UICorner")
		local CombatFrame = Instance.new("ScrollingFrame")
		local UIPadding_2 = Instance.new("UIPadding")
		local UIListLayout_2 = Instance.new("UIListLayout")
		local AutoStomp = Instance.new("TextButton")
		local UICorner_12 = Instance.new("UICorner")
		local TextLabel_7 = Instance.new("TextLabel")
		local AutoFight = Instance.new("TextButton")
		local UICorner_13 = Instance.new("UICorner")
		local TextLabel_8 = Instance.new("TextLabel")
		local SpamGrabHair = Instance.new("TextButton")
		local UICorner_14 = Instance.new("UICorner")
		local TextLabel_9 = Instance.new("TextLabel")
		local Heal = Instance.new("TextButton")
		local UICorner_15 = Instance.new("UICorner")
		local TextLabel_10 = Instance.new("TextLabel")
		local TextBox = Instance.new("TextBox")
		local EspFrame = Instance.new("ScrollingFrame")
		local UIPadding_3 = Instance.new("UIPadding")
		local UIListLayout_3 = Instance.new("UIListLayout")
		local HealthEsp = Instance.new("TextButton")
		local UICorner_16 = Instance.new("UICorner")
		local TextLabel_11 = Instance.new("TextLabel")
		local HighLightPlayer = Instance.new("TextButton")
		local UICorner_17 = Instance.new("UICorner")
		local TextLabel_12 = Instance.new("TextLabel")
		local NameEsp = Instance.new("TextButton")
		local UICorner_18 = Instance.new("UICorner")
		local TextLabel_13 = Instance.new("TextLabel")
		local HighlightCops = Instance.new("TextButton")
		local UICorner_19 = Instance.new("UICorner")
		local TextLabel_14 = Instance.new("TextLabel")
		local BountyName = Instance.new("TextButton")
		local UICorner_20 = Instance.new("UICorner")
		local TextLabel_15 = Instance.new("TextLabel")
		local Tracers = Instance.new("TextButton")
		local UICorner_21 = Instance.new("UICorner")
		local TextLabel_16 = Instance.new("TextLabel")
		local RobberyEsp = Instance.new("TextButton")
		local UICorner_22 = Instance.new("UICorner")
		local TextLabel_17 = Instance.new("TextLabel")
		local MiscFrame = Instance.new("ScrollingFrame")
		local Fly = Instance.new("TextButton")
		local UICorner_23 = Instance.new("UICorner")
		local TextLabel_18 = Instance.new("TextLabel")
		local FlySpeedBox = Instance.new("TextBox")
		local Speed = Instance.new("TextButton")
		local UICorner_24 = Instance.new("UICorner")
		local TextLabel_19 = Instance.new("TextLabel")
		local SpeedBox = Instance.new("TextBox")
		local UIPadding_4 = Instance.new("UIPadding")
		local UIListLayout_4 = Instance.new("UIListLayout")
		local Noclip = Instance.new("TextButton")
		local UICorner_25 = Instance.new("UICorner")
		local TextLabel_20 = Instance.new("TextLabel")
		local PinkieSpin = Instance.new("TextButton")
		local UICorner_26 = Instance.new("UICorner")
		local TextLabel_21 = Instance.new("TextLabel")
		local WeaponSpin = Instance.new("TextButton")
		local UICorner_27 = Instance.new("UICorner")
		local TextLabel_22 = Instance.new("TextLabel")
		local GothSpin = Instance.new("TextButton")
		local UICorner_28 = Instance.new("UICorner")
		local TextLabel_23 = Instance.new("TextLabel")
		local DisableKeybinds = Instance.new("TextButton")
		local UICorner_29 = Instance.new("UICorner")
		local TextLabel_24 = Instance.new("TextLabel")
		local AutoClicker = Instance.new("TextButton")
		local UICorner_30 = Instance.new("UICorner")
		local TextLabel_25 = Instance.new("TextLabel")
		local AntiAfk = Instance.new("TextButton")
		local UICorner_31 = Instance.new("UICorner")
		local TextLabel_26 = Instance.new("TextLabel")
		local NoSlow = Instance.new("TextButton")
		local UICorner_32 = Instance.new("UICorner")
		local FightWithoutSlowing = Instance.new("TextLabel")
		local Reset = Instance.new("TextButton")
		local UICorner_33 = Instance.new("UICorner")
		local TextLabel_27 = Instance.new("TextLabel")
		local CopyDiscord = Instance.new("TextButton")
		local UICorner_34 = Instance.new("UICorner")
		local TextLabel_28 = Instance.new("TextLabel")
		local FarmingFrame = Instance.new("ScrollingFrame")
		local UIPadding_5 = Instance.new("UIPadding")
		local UIListLayout_5 = Instance.new("UIListLayout")
		local SlayFarm = Instance.new("TextButton")
		local UICorner_35 = Instance.new("UICorner")
		local TextLabel_29 = Instance.new("TextLabel")
		local KillAll1 = Instance.new("TextButton")
		local UICorner_36 = Instance.new("UICorner")
		local TextLabel_30 = Instance.new("TextLabel")
		local ATMFarm = Instance.new("TextButton")
		local UICorner_37 = Instance.new("UICorner")
		local TextLabel_31 = Instance.new("TextLabel")
		local TextLabel_32 = Instance.new("TextLabel")
		local PlayerFrame = Instance.new("ScrollingFrame")
		local PlayerFrame_2 = Instance.new("Frame")
		local UICorner_38 = Instance.new("UICorner")
		local PlayerButton_2 = Instance.new("TextButton")
		local UIPadding_6 = Instance.new("UIPadding")
		local UIListLayout_6 = Instance.new("UIListLayout")
		local UIPadding_7 = Instance.new("UIPadding")
		local UIListLayout_7 = Instance.new("UIListLayout")
		local SpectateButton = Instance.new("TextButton")
		local UICorner_39 = Instance.new("UICorner")
		local TextLabel_33 = Instance.new("TextLabel")
		local GrabPlayerToVoidButton = Instance.new("TextButton")
		local UICorner_40 = Instance.new("UICorner")
		local TextLabel_34 = Instance.new("TextLabel")
		local KillUserButton = Instance.new("TextButton")
		local UICorner_41 = Instance.new("UICorner")
		local TextLabel_35 = Instance.new("TextLabel")
		local TaserPersonButton = Instance.new("TextButton")
		local UICorner_42 = Instance.new("UICorner")
		local TextLabel_36 = Instance.new("TextLabel")
		local WantedPlayerFrame = Instance.new("Frame")
		local UICorner_43 = Instance.new("UICorner")
		local PlayerButton_3 = Instance.new("TextButton")
		local UIPadding_8 = Instance.new("UIPadding")
		local UIListLayout_8 = Instance.new("UIListLayout")
		local ArrestPersonButton = Instance.new("TextButton")
		local UICorner_44 = Instance.new("UICorner")
		local TextLabel_37 = Instance.new("TextLabel")
		local BuyFrame = Instance.new("ScrollingFrame")
		local List1 = Instance.new("TextButton")
		local UICorner_45 = Instance.new("UICorner")
		local UIPadding_9 = Instance.new("UIPadding")
		local UIListLayout_9 = Instance.new("UIListLayout")

		-- Properties

		DivazScript.Name = "DivazScript"
		DivazScript.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
		DivazScript.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
		DivazScript.ResetOnSpawn = false

		MainFrame.Name = "MainFrame"
		MainFrame.Parent = DivazScript
		MainFrame.BackgroundColor3 = Color3.new(0.0588235, 0.0666667, 0.0901961)
		MainFrame.BorderColor3 = Color3.new(0, 0, 0)
		MainFrame.BorderSizePixel = 0
		MainFrame.Position = UDim2.new(0.271893233, 0, 0.157629251, 0)
		MainFrame.Size = UDim2.new(0, 607, 0, 575)

		UICorner.Parent = MainFrame
		UICorner.CornerRadius = UDim.new(0, 15)

		Frame.Parent = MainFrame
		Frame.BackgroundColor3 = Color3.new(0.415686, 0.415686, 0.415686)
		Frame.BorderColor3 = Color3.new(0, 0, 0)
		Frame.BorderSizePixel = 0
		Frame.Position = UDim2.new(0, 0, 0.0765217394, 0)
		Frame.Size = UDim2.new(0, 607, 0, 1)

		Frame_2.Parent = MainFrame
		Frame_2.BackgroundColor3 = Color3.new(0.0666667, 0.0823529, 0.113725)
		Frame_2.BorderColor3 = Color3.new(0, 0, 0)
		Frame_2.BorderSizePixel = 0
		Frame_2.Position = UDim2.new(0.243822083, 0, 0.989565194, 0)
		Frame_2.Size = UDim2.new(0, 7, 0, -514)

		NavBar.Name = "NavBar"
		NavBar.Parent = MainFrame
		NavBar.BackgroundColor3 = Color3.new(1, 1, 1)
		NavBar.BackgroundTransparency = 1
		NavBar.BorderColor3 = Color3.new(0, 0, 0)
		NavBar.BorderSizePixel = 0
		NavBar.Position = UDim2.new(0, 0, 0.0956521705, 0)
		NavBar.Size = UDim2.new(0, 148, 0, 514)

		CombatButton.Name = "CombatButton"
		CombatButton.Parent = NavBar
		CombatButton.BackgroundColor3 = Color3.new(0.121569, 0.160784, 0.215686)
		CombatButton.BackgroundTransparency = 0.009999999776482582
		CombatButton.BorderColor3 = Color3.new(0, 0, 0)
		CombatButton.BorderSizePixel = 0
		CombatButton.Position = UDim2.new(1.66075917e-08, 0, 0.0837812349, 0)
		CombatButton.Size = UDim2.new(0, 133, 0, 35)
		CombatButton.Font = Enum.Font.SourceSans
		CombatButton.Text = ""
		CombatButton.TextColor3 = Color3.new(1, 1, 1)
		CombatButton.TextSize = 14

		UICorner_2.Parent = CombatButton

		Combat.Name = "Combat"
		Combat.Parent = CombatButton
		Combat.BackgroundColor3 = Color3.new(1, 1, 1)
		Combat.BackgroundTransparency = 1
		Combat.BorderColor3 = Color3.new(0, 0, 0)
		Combat.BorderSizePixel = 0
		Combat.Position = UDim2.new(0.0827067643, 0, 0, 0)
		Combat.Size = UDim2.new(0, 122, 0, 35)
		Combat.Font = Enum.Font.SourceSans
		Combat.Text = "Combat"
		Combat.TextColor3 = Color3.new(1, 1, 1)
		Combat.TextSize = 14
		Combat.TextXAlignment = Enum.TextXAlignment.Left

		UIPadding.Parent = NavBar
		UIPadding.PaddingLeft = UDim.new(0.0299999993, 0)
		UIPadding.PaddingTop = UDim.new(0.00999999978, 0)

		UIListLayout.Parent = NavBar
		UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
		UIListLayout.Padding = UDim.new(0.0149999997, 0)

		BuyButton.Name = "BuyButton"
		BuyButton.Parent = NavBar
		BuyButton.BackgroundColor3 = Color3.new(0.121569, 0.160784, 0.215686)
		BuyButton.BackgroundTransparency = 0.009999999776482582
		BuyButton.BorderColor3 = Color3.new(0, 0, 0)
		BuyButton.BorderSizePixel = 0
		BuyButton.Position = UDim2.new(1.66075917e-08, 0, 2.90491542e-08, 0)
		BuyButton.Size = UDim2.new(0, 133, 0, 35)
		BuyButton.Font = Enum.Font.SourceSans
		BuyButton.Text = ""
		BuyButton.TextColor3 = Color3.new(1, 1, 1)
		BuyButton.TextSize = 14

		UICorner_3.Parent = BuyButton

		TextLabel.Parent = BuyButton
		TextLabel.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel.BackgroundTransparency = 1
		TextLabel.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel.BorderSizePixel = 0
		TextLabel.Position = UDim2.new(0.0827067643, 0, 0, 0)
		TextLabel.Size = UDim2.new(0, 122, 0, 35)
		TextLabel.Font = Enum.Font.SourceSans
		TextLabel.Text = "Buy Shop"
		TextLabel.TextColor3 = Color3.new(1, 1, 1)
		TextLabel.TextSize = 14
		TextLabel.TextXAlignment = Enum.TextXAlignment.Left

		FarmButton.Name = "FarmButton"
		FarmButton.Parent = NavBar
		FarmButton.BackgroundColor3 = Color3.new(0.121569, 0.160784, 0.215686)
		FarmButton.BackgroundTransparency = 0.009999999776482582
		FarmButton.BorderColor3 = Color3.new(0, 0, 0)
		FarmButton.BorderSizePixel = 0
		FarmButton.Position = UDim2.new(1.66075917e-08, 0, 0.0837812349, 0)
		FarmButton.Size = UDim2.new(0, 133, 0, 35)
		FarmButton.Font = Enum.Font.SourceSans
		FarmButton.Text = ""
		FarmButton.TextColor3 = Color3.new(1, 1, 1)
		FarmButton.TextSize = 14

		UICorner_4.Parent = FarmButton

		TextLabel_2.Parent = FarmButton
		TextLabel_2.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_2.BackgroundTransparency = 1
		TextLabel_2.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_2.BorderSizePixel = 0
		TextLabel_2.Position = UDim2.new(0.0827067643, 0, 0, 0)
		TextLabel_2.Size = UDim2.new(0, 122, 0, 35)
		TextLabel_2.Font = Enum.Font.SourceSans
		TextLabel_2.Text = "Farming"
		TextLabel_2.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_2.TextSize = 14
		TextLabel_2.TextXAlignment = Enum.TextXAlignment.Left

		EspButton.Name = "EspButton"
		EspButton.Parent = NavBar
		EspButton.BackgroundColor3 = Color3.new(0.121569, 0.160784, 0.215686)
		EspButton.BackgroundTransparency = 0.009999999776482582
		EspButton.BorderColor3 = Color3.new(0, 0, 0)
		EspButton.BorderSizePixel = 0
		EspButton.Position = UDim2.new(1.66075917e-08, 0, 0.0837812349, 0)
		EspButton.Size = UDim2.new(0, 133, 0, 35)
		EspButton.Font = Enum.Font.SourceSans
		EspButton.Text = ""
		EspButton.TextColor3 = Color3.new(1, 1, 1)
		EspButton.TextSize = 14

		UICorner_5.Parent = EspButton

		TextLabel_3.Parent = EspButton
		TextLabel_3.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_3.BackgroundTransparency = 1
		TextLabel_3.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_3.BorderSizePixel = 0
		TextLabel_3.Position = UDim2.new(0.0827067643, 0, 0, 0)
		TextLabel_3.Size = UDim2.new(0, 122, 0, 35)
		TextLabel_3.Font = Enum.Font.SourceSans
		TextLabel_3.Text = "Esp"
		TextLabel_3.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_3.TextSize = 14
		TextLabel_3.TextXAlignment = Enum.TextXAlignment.Left

		PlayerButton.Name = "PlayerButton"
		PlayerButton.Parent = NavBar
		PlayerButton.BackgroundColor3 = Color3.new(0.121569, 0.160784, 0.215686)
		PlayerButton.BackgroundTransparency = 0.009999999776482582
		PlayerButton.BorderColor3 = Color3.new(0, 0, 0)
		PlayerButton.BorderSizePixel = 0
		PlayerButton.Position = UDim2.new(1.66075917e-08, 0, 0.0837812349, 0)
		PlayerButton.Size = UDim2.new(0, 133, 0, 35)
		PlayerButton.Font = Enum.Font.SourceSans
		PlayerButton.Text = ""
		PlayerButton.TextColor3 = Color3.new(1, 1, 1)
		PlayerButton.TextSize = 14

		UICorner_6.Parent = PlayerButton

		TextLabel_4.Parent = PlayerButton
		TextLabel_4.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_4.BackgroundTransparency = 1
		TextLabel_4.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_4.BorderSizePixel = 0
		TextLabel_4.Position = UDim2.new(0.0827067643, 0, 0, 0)
		TextLabel_4.Size = UDim2.new(0, 122, 0, 35)
		TextLabel_4.Font = Enum.Font.SourceSans
		TextLabel_4.Text = "Player"
		TextLabel_4.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_4.TextSize = 14
		TextLabel_4.TextXAlignment = Enum.TextXAlignment.Left

		MiscButton.Name = "MiscButton"
		MiscButton.Parent = NavBar
		MiscButton.BackgroundColor3 = Color3.new(0.121569, 0.160784, 0.215686)
		MiscButton.BackgroundTransparency = 0.009999999776482582
		MiscButton.BorderColor3 = Color3.new(0, 0, 0)
		MiscButton.BorderSizePixel = 0
		MiscButton.Position = UDim2.new(1.66075917e-08, 0, 0.249378413, 0)
		MiscButton.Size = UDim2.new(0, 133, 0, 35)
		MiscButton.Font = Enum.Font.SourceSans
		MiscButton.Text = ""
		MiscButton.TextColor3 = Color3.new(1, 1, 1)
		MiscButton.TextSize = 14

		UICorner_7.Parent = MiscButton

		TextLabel_5.Parent = MiscButton
		TextLabel_5.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_5.BackgroundTransparency = 1
		TextLabel_5.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_5.BorderSizePixel = 0
		TextLabel_5.Position = UDim2.new(0.0827067643, 0, 0, 0)
		TextLabel_5.Size = UDim2.new(0, 122, 0, 35)
		TextLabel_5.Font = Enum.Font.SourceSans
		TextLabel_5.Text = "Misc"
		TextLabel_5.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_5.TextSize = 14
		TextLabel_5.TextXAlignment = Enum.TextXAlignment.Left

		Frame_3.Parent = MainFrame
		Frame_3.BackgroundColor3 = Color3.new(0.137255, 0.137255, 0.137255)
		Frame_3.BackgroundTransparency = 1
		Frame_3.BorderColor3 = Color3.new(0, 0, 0)
		Frame_3.BorderSizePixel = 0
		Frame_3.Position = UDim2.new(-0.00177304959, 0, 0.00259740255, 0)
		Frame_3.Size = UDim2.new(0, 563, 0, 68)

		TextLabel_6.Parent = Frame_3
		TextLabel_6.BackgroundColor3 = Color3.new(0.137255, 0.137255, 0.137255)
		TextLabel_6.BackgroundTransparency = 1
		TextLabel_6.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_6.BorderSizePixel = 0
		TextLabel_6.Position = UDim2.new(0.00888099428, 0, -0.0219632313, 0)
		TextLabel_6.Size = UDim2.new(0, 295, 0, 43)
		TextLabel_6.Font = Enum.Font.SourceSansBold
		TextLabel_6.Text = "Divaz Script : Wiet Hub"
		TextLabel_6.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_6.TextSize = 35
		TextLabel_6.TextWrapped = true

		UICorner_8.Parent = TextLabel_6

		UICorner_9.Parent = Frame_3

		RiskLabel.Name = "RiskLabel"
		RiskLabel.Parent = Frame_3
		RiskLabel.BackgroundColor3 = Color3.new(0.137255, 0.137255, 0.137255)
		RiskLabel.BackgroundTransparency = 1
		RiskLabel.BorderColor3 = Color3.new(0, 0, 0)
		RiskLabel.BorderSizePixel = 0
		RiskLabel.Position = UDim2.new(0.532859564, 0, -0.0735294148, 0)
		RiskLabel.Size = UDim2.new(0, 131, 0, 46)
		RiskLabel.Visible = false
		RiskLabel.Font = Enum.Font.SourceSansBold
		RiskLabel.Text = "Script did not update to this version use it at your own risk!"
		RiskLabel.TextColor3 = Color3.new(0.666667, 0, 0)
		RiskLabel.TextScaled = true
		RiskLabel.TextSize = 20
		RiskLabel.TextWrapped = true

		UICorner_10.Parent = RiskLabel

		VersionLabel.Name = "VersionLabel"
		VersionLabel.Parent = Frame_3
		VersionLabel.BackgroundColor3 = Color3.new(0.137255, 0.137255, 0.137255)
		VersionLabel.BackgroundTransparency = 1
		VersionLabel.BorderColor3 = Color3.new(0, 0, 0)
		VersionLabel.BorderSizePixel = 0
		VersionLabel.Position = UDim2.new(0.774422646, 0, 0.132352948, 0)
		VersionLabel.Size = UDim2.new(0, 160, 0, 22)
		VersionLabel.Font = Enum.Font.SourceSansBold
		VersionLabel.Text = ""
		VersionLabel.TextColor3 = Color3.new(1, 1, 1)
		VersionLabel.TextSize = 20
		VersionLabel.TextWrapped = true

		UICorner_11.Parent = VersionLabel

		CombatFrame.Name = "CombatFrame"
		CombatFrame.Parent = MainFrame
		CombatFrame.Active = true
		CombatFrame.BackgroundColor3 = Color3.new(1, 1, 1)
		CombatFrame.BackgroundTransparency = 1
		CombatFrame.BorderColor3 = Color3.new(0, 0, 0)
		CombatFrame.BorderSizePixel = 0
		CombatFrame.Position = UDim2.new(0.285008252, 0, 0.104347825, 0)
		CombatFrame.Size = UDim2.new(0, 415, 0, 509)
		CombatFrame.BottomImage = ""
		CombatFrame.MidImage = ""
		CombatFrame.TopImage = ""

		UIPadding_2.Parent = CombatFrame
		UIPadding_2.PaddingLeft = UDim.new(0.00999999978, 0)
		UIPadding_2.PaddingTop = UDim.new(0.00999999978, 0)

		UIListLayout_2.Parent = CombatFrame
		UIListLayout_2.SortOrder = Enum.SortOrder.LayoutOrder
		UIListLayout_2.Padding = UDim.new(0.00700000022, 0)

		AutoStomp.Name = "AutoStomp"
		AutoStomp.Parent = CombatFrame
		AutoStomp.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		AutoStomp.BorderColor3 = Color3.new(0, 0, 0)
		AutoStomp.BorderSizePixel = 0
		AutoStomp.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		AutoStomp.Size = UDim2.new(0, 397, 0, 33)
		AutoStomp.Font = Enum.Font.SourceSans
		AutoStomp.Text = ""
		AutoStomp.TextColor3 = Color3.new(0, 0, 0)
		AutoStomp.TextSize = 14

		UICorner_12.Parent = AutoStomp

		TextLabel_7.Parent = AutoStomp
		TextLabel_7.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_7.BackgroundTransparency = 1
		TextLabel_7.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_7.BorderSizePixel = 0
		TextLabel_7.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_7.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_7.Font = Enum.Font.SourceSans
		TextLabel_7.Text = "Auto Stomp - No Work For Mobile"
		TextLabel_7.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_7.TextSize = 15
		TextLabel_7.TextXAlignment = Enum.TextXAlignment.Left

		AutoFight.Name = "AutoFight"
		AutoFight.Parent = CombatFrame
		AutoFight.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		AutoFight.BorderColor3 = Color3.new(0, 0, 0)
		AutoFight.BorderSizePixel = 0
		AutoFight.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		AutoFight.Size = UDim2.new(0, 397, 0, 33)
		AutoFight.Font = Enum.Font.SourceSans
		AutoFight.Text = ""
		AutoFight.TextColor3 = Color3.new(0, 0, 0)
		AutoFight.TextSize = 14

		UICorner_13.Parent = AutoFight

		TextLabel_8.Parent = AutoFight
		TextLabel_8.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_8.BackgroundTransparency = 1
		TextLabel_8.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_8.BorderSizePixel = 0
		TextLabel_8.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_8.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_8.Font = Enum.Font.SourceSans
		TextLabel_8.Text = "Auto Fight Keybind H - No Work For Mobile"
		TextLabel_8.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_8.TextSize = 16
		TextLabel_8.TextXAlignment = Enum.TextXAlignment.Left

		SpamGrabHair.Name = "SpamGrabHair"
		SpamGrabHair.Parent = CombatFrame
		SpamGrabHair.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		SpamGrabHair.BorderColor3 = Color3.new(0, 0, 0)
		SpamGrabHair.BorderSizePixel = 0
		SpamGrabHair.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		SpamGrabHair.Size = UDim2.new(0, 397, 0, 33)
		SpamGrabHair.Font = Enum.Font.SourceSans
		SpamGrabHair.Text = ""
		SpamGrabHair.TextColor3 = Color3.new(0, 0, 0)
		SpamGrabHair.TextSize = 14

		UICorner_14.Parent = SpamGrabHair

		TextLabel_9.Parent = SpamGrabHair
		TextLabel_9.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_9.BackgroundTransparency = 1
		TextLabel_9.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_9.BorderSizePixel = 0
		TextLabel_9.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_9.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_9.Font = Enum.Font.SourceSans
		TextLabel_9.Text = "Spam Grab Hair"
		TextLabel_9.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_9.TextSize = 16
		TextLabel_9.TextXAlignment = Enum.TextXAlignment.Left

		Heal.Name = "Heal"
		Heal.Parent = CombatFrame
		Heal.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		Heal.BorderColor3 = Color3.new(0, 0, 0)
		Heal.BorderSizePixel = 0
		Heal.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		Heal.Size = UDim2.new(0, 397, 0, 33)
		Heal.Font = Enum.Font.SourceSans
		Heal.Text = ""
		Heal.TextColor3 = Color3.new(0, 0, 0)
		Heal.TextSize = 14

		UICorner_15.Parent = Heal

		TextLabel_10.Parent = Heal
		TextLabel_10.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_10.BackgroundTransparency = 1
		TextLabel_10.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_10.BorderSizePixel = 0
		TextLabel_10.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_10.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_10.Font = Enum.Font.SourceSans
		TextLabel_10.Text = "Tp To Hospital Bed Under costum health"
		TextLabel_10.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_10.TextSize = 15
		TextLabel_10.TextXAlignment = Enum.TextXAlignment.Left

		TextBox.Parent = Heal
		TextBox.BackgroundColor3 = Color3.new(0.0666667, 0.0901961, 0.133333)
		TextBox.BorderColor3 = Color3.new(0, 0, 0)
		TextBox.BorderSizePixel = 0
		TextBox.Position = UDim2.new(0.576826215, 0, 0.181818187, 0)
		TextBox.Size = UDim2.new(0, 146, 0, 21)
		TextBox.Font = Enum.Font.SourceSans
		TextBox.Text = "30 HP"
		TextBox.TextColor3 = Color3.new(1, 1, 1)
		TextBox.TextSize = 20

		EspFrame.Name = "EspFrame"
		EspFrame.Parent = MainFrame
		EspFrame.Active = true
		EspFrame.BackgroundColor3 = Color3.new(1, 1, 1)
		EspFrame.BackgroundTransparency = 1
		EspFrame.BorderColor3 = Color3.new(0, 0, 0)
		EspFrame.BorderSizePixel = 0
		EspFrame.Position = UDim2.new(0.285008252, 0, 0.104347825, 0)
		EspFrame.Size = UDim2.new(0, 415, 0, 509)
		EspFrame.Visible = false
		EspFrame.BottomImage = ""
		EspFrame.MidImage = ""
		EspFrame.TopImage = ""

		UIPadding_3.Parent = EspFrame
		UIPadding_3.PaddingLeft = UDim.new(0.00999999978, 0)
		UIPadding_3.PaddingTop = UDim.new(0.00999999978, 0)

		UIListLayout_3.Parent = EspFrame
		UIListLayout_3.SortOrder = Enum.SortOrder.LayoutOrder
		UIListLayout_3.Padding = UDim.new(0.00700000022, 0)

		HealthEsp.Name = "HealthEsp"
		HealthEsp.Parent = EspFrame
		HealthEsp.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		HealthEsp.BorderColor3 = Color3.new(0, 0, 0)
		HealthEsp.BorderSizePixel = 0
		HealthEsp.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		HealthEsp.Size = UDim2.new(0, 397, 0, 33)
		HealthEsp.Font = Enum.Font.SourceSans
		HealthEsp.Text = ""
		HealthEsp.TextColor3 = Color3.new(0, 0, 0)
		HealthEsp.TextSize = 14

		UICorner_16.Parent = HealthEsp

		TextLabel_11.Parent = HealthEsp
		TextLabel_11.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_11.BackgroundTransparency = 1
		TextLabel_11.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_11.BorderSizePixel = 0
		TextLabel_11.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_11.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_11.Font = Enum.Font.SourceSans
		TextLabel_11.Text = "Health Esp"
		TextLabel_11.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_11.TextSize = 16
		TextLabel_11.TextXAlignment = Enum.TextXAlignment.Left

		HighLightPlayer.Name = "HighLightPlayer"
		HighLightPlayer.Parent = EspFrame
		HighLightPlayer.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		HighLightPlayer.BorderColor3 = Color3.new(0, 0, 0)
		HighLightPlayer.BorderSizePixel = 0
		HighLightPlayer.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		HighLightPlayer.Size = UDim2.new(0, 397, 0, 33)
		HighLightPlayer.Font = Enum.Font.SourceSans
		HighLightPlayer.Text = ""
		HighLightPlayer.TextColor3 = Color3.new(0, 0, 0)
		HighLightPlayer.TextSize = 14

		UICorner_17.Parent = HighLightPlayer

		TextLabel_12.Parent = HighLightPlayer
		TextLabel_12.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_12.BackgroundTransparency = 1
		TextLabel_12.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_12.BorderSizePixel = 0
		TextLabel_12.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_12.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_12.Font = Enum.Font.SourceSans
		TextLabel_12.Text = "HighLight Esp"
		TextLabel_12.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_12.TextSize = 16
		TextLabel_12.TextXAlignment = Enum.TextXAlignment.Left

		NameEsp.Name = "NameEsp"
		NameEsp.Parent = EspFrame
		NameEsp.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		NameEsp.BorderColor3 = Color3.new(0, 0, 0)
		NameEsp.BorderSizePixel = 0
		NameEsp.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		NameEsp.Size = UDim2.new(0, 397, 0, 33)
		NameEsp.Font = Enum.Font.SourceSans
		NameEsp.Text = ""
		NameEsp.TextColor3 = Color3.new(0, 0, 0)
		NameEsp.TextSize = 14

		UICorner_18.Parent = NameEsp

		TextLabel_13.Parent = NameEsp
		TextLabel_13.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_13.BackgroundTransparency = 1
		TextLabel_13.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_13.BorderSizePixel = 0
		TextLabel_13.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_13.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_13.Font = Enum.Font.SourceSans
		TextLabel_13.Text = "Name Esp"
		TextLabel_13.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_13.TextSize = 16
		TextLabel_13.TextXAlignment = Enum.TextXAlignment.Left

		HighlightCops.Name = "HighlightCops"
		HighlightCops.Parent = EspFrame
		HighlightCops.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		HighlightCops.BorderColor3 = Color3.new(0, 0, 0)
		HighlightCops.BorderSizePixel = 0
		HighlightCops.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		HighlightCops.Size = UDim2.new(0, 397, 0, 33)
		HighlightCops.Font = Enum.Font.SourceSans
		HighlightCops.Text = ""
		HighlightCops.TextColor3 = Color3.new(0, 0, 0)
		HighlightCops.TextSize = 14

		UICorner_19.Parent = HighlightCops

		TextLabel_14.Parent = HighlightCops
		TextLabel_14.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_14.BackgroundTransparency = 1
		TextLabel_14.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_14.BorderSizePixel = 0
		TextLabel_14.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_14.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_14.Font = Enum.Font.SourceSans
		TextLabel_14.Text = "HighLight Cops"
		TextLabel_14.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_14.TextSize = 16
		TextLabel_14.TextXAlignment = Enum.TextXAlignment.Left

		BountyName.Name = "BountyName"
		BountyName.Parent = EspFrame
		BountyName.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		BountyName.BorderColor3 = Color3.new(0, 0, 0)
		BountyName.BorderSizePixel = 0
		BountyName.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		BountyName.Size = UDim2.new(0, 397, 0, 33)
		BountyName.Font = Enum.Font.SourceSans
		BountyName.Text = ""
		BountyName.TextColor3 = Color3.new(0, 0, 0)
		BountyName.TextSize = 14

		UICorner_20.Parent = BountyName

		TextLabel_15.Parent = BountyName
		TextLabel_15.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_15.BackgroundTransparency = 1
		TextLabel_15.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_15.BorderSizePixel = 0
		TextLabel_15.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_15.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_15.Font = Enum.Font.SourceSans
		TextLabel_15.Text = "Bounty Name Esp"
		TextLabel_15.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_15.TextSize = 16
		TextLabel_15.TextXAlignment = Enum.TextXAlignment.Left

		Tracers.Name = "Tracers"
		Tracers.Parent = EspFrame
		Tracers.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		Tracers.BorderColor3 = Color3.new(0, 0, 0)
		Tracers.BorderSizePixel = 0
		Tracers.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		Tracers.Size = UDim2.new(0, 397, 0, 33)
		Tracers.Font = Enum.Font.SourceSans
		Tracers.Text = ""
		Tracers.TextColor3 = Color3.new(0, 0, 0)
		Tracers.TextSize = 14

		UICorner_21.Parent = Tracers

		TextLabel_16.Parent = Tracers
		TextLabel_16.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_16.BackgroundTransparency = 1
		TextLabel_16.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_16.BorderSizePixel = 0
		TextLabel_16.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_16.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_16.Font = Enum.Font.SourceSans
		TextLabel_16.Text = "Tracers"
		TextLabel_16.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_16.TextSize = 16
		TextLabel_16.TextXAlignment = Enum.TextXAlignment.Left

		RobberyEsp.Name = "RobberyEsp"
		RobberyEsp.Parent = EspFrame
		RobberyEsp.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		RobberyEsp.BorderColor3 = Color3.new(0, 0, 0)
		RobberyEsp.BorderSizePixel = 0
		RobberyEsp.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		RobberyEsp.Size = UDim2.new(0, 397, 0, 33)
		RobberyEsp.Font = Enum.Font.SourceSans
		RobberyEsp.Text = ""
		RobberyEsp.TextColor3 = Color3.new(0, 0, 0)
		RobberyEsp.TextSize = 14

		UICorner_22.Parent = RobberyEsp

		TextLabel_17.Parent = RobberyEsp
		TextLabel_17.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_17.BackgroundTransparency = 1
		TextLabel_17.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_17.BorderSizePixel = 0
		TextLabel_17.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_17.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_17.Font = Enum.Font.SourceSans
		TextLabel_17.Text = "Robbery Esp"
		TextLabel_17.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_17.TextSize = 16
		TextLabel_17.TextXAlignment = Enum.TextXAlignment.Left

		MiscFrame.Name = "MiscFrame"
		MiscFrame.Parent = MainFrame
		MiscFrame.Active = true
		MiscFrame.BackgroundColor3 = Color3.new(1, 1, 1)
		MiscFrame.BackgroundTransparency = 1
		MiscFrame.BorderColor3 = Color3.new(0, 0, 0)
		MiscFrame.BorderSizePixel = 0
		MiscFrame.Position = UDim2.new(0.285008252, 0, 0.104347825, 0)
		MiscFrame.Size = UDim2.new(0, 415, 0, 509)
		MiscFrame.Visible = false
		MiscFrame.BottomImage = ""
		MiscFrame.MidImage = ""
		MiscFrame.TopImage = ""

		Fly.Name = "Fly"
		Fly.Parent = MiscFrame
		Fly.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		Fly.BorderColor3 = Color3.new(0, 0, 0)
		Fly.BorderSizePixel = 0
		Fly.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		Fly.Size = UDim2.new(0, 397, 0, 33)
		Fly.Font = Enum.Font.SourceSans
		Fly.Text = ""
		Fly.TextColor3 = Color3.new(0, 0, 0)
		Fly.TextSize = 14

		UICorner_23.Parent = Fly

		TextLabel_18.Parent = Fly
		TextLabel_18.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_18.BackgroundTransparency = 1
		TextLabel_18.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_18.BorderSizePixel = 0
		TextLabel_18.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_18.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_18.Font = Enum.Font.SourceSans
		TextLabel_18.Text = "Fly Keybind X"
		TextLabel_18.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_18.TextSize = 15
		TextLabel_18.TextXAlignment = Enum.TextXAlignment.Left

		FlySpeedBox.Name = "FlySpeedBox"
		FlySpeedBox.Parent = Fly
		FlySpeedBox.BackgroundColor3 = Color3.new(0.0666667, 0.0901961, 0.133333)
		FlySpeedBox.BorderColor3 = Color3.new(0, 0, 0)
		FlySpeedBox.BorderSizePixel = 0
		FlySpeedBox.Position = UDim2.new(0.576826215, 0, 0.181818187, 0)
		FlySpeedBox.Size = UDim2.new(0, 146, 0, 21)
		FlySpeedBox.Font = Enum.Font.SourceSans
		FlySpeedBox.Text = "speed 50"
		FlySpeedBox.TextColor3 = Color3.new(1, 1, 1)
		FlySpeedBox.TextSize = 20

		Speed.Name = "Speed"
		Speed.Parent = MiscFrame
		Speed.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		Speed.BorderColor3 = Color3.new(0, 0, 0)
		Speed.BorderSizePixel = 0
		Speed.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		Speed.Size = UDim2.new(0, 397, 0, 33)
		Speed.Font = Enum.Font.SourceSans
		Speed.Text = ""
		Speed.TextColor3 = Color3.new(0, 0, 0)
		Speed.TextSize = 14

		UICorner_24.Parent = Speed

		TextLabel_19.Parent = Speed
		TextLabel_19.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_19.BackgroundTransparency = 1
		TextLabel_19.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_19.BorderSizePixel = 0
		TextLabel_19.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_19.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_19.Font = Enum.Font.SourceSans
		TextLabel_19.Text = "Speed"
		TextLabel_19.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_19.TextSize = 15
		TextLabel_19.TextXAlignment = Enum.TextXAlignment.Left

		SpeedBox.Name = "SpeedBox"
		SpeedBox.Parent = Speed
		SpeedBox.BackgroundColor3 = Color3.new(0.0666667, 0.0901961, 0.133333)
		SpeedBox.BorderColor3 = Color3.new(0, 0, 0)
		SpeedBox.BorderSizePixel = 0
		SpeedBox.Position = UDim2.new(0.576826215, 0, 0.181818187, 0)
		SpeedBox.Size = UDim2.new(0, 146, 0, 21)
		SpeedBox.Font = Enum.Font.SourceSans
		SpeedBox.Text = "speed 50"
		SpeedBox.TextColor3 = Color3.new(1, 1, 1)
		SpeedBox.TextSize = 20

		UIPadding_4.Parent = MiscFrame
		UIPadding_4.PaddingLeft = UDim.new(0.00999999978, 0)
		UIPadding_4.PaddingTop = UDim.new(0.00999999978, 0)

		UIListLayout_4.Parent = MiscFrame
		UIListLayout_4.SortOrder = Enum.SortOrder.LayoutOrder
		UIListLayout_4.Padding = UDim.new(0.00700000022, 0)

		Noclip.Name = "Noclip"
		Noclip.Parent = MiscFrame
		Noclip.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		Noclip.BorderColor3 = Color3.new(0, 0, 0)
		Noclip.BorderSizePixel = 0
		Noclip.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		Noclip.Size = UDim2.new(0, 397, 0, 33)
		Noclip.Font = Enum.Font.SourceSans
		Noclip.Text = ""
		Noclip.TextColor3 = Color3.new(0, 0, 0)
		Noclip.TextSize = 14

		UICorner_25.Parent = Noclip

		TextLabel_20.Parent = Noclip
		TextLabel_20.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_20.BackgroundTransparency = 1
		TextLabel_20.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_20.BorderSizePixel = 0
		TextLabel_20.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_20.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_20.Font = Enum.Font.SourceSans
		TextLabel_20.Text = "Noclip Keybind C"
		TextLabel_20.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_20.TextSize = 15
		TextLabel_20.TextXAlignment = Enum.TextXAlignment.Left

		PinkieSpin.Name = "PinkieSpin"
		PinkieSpin.Parent = MiscFrame
		PinkieSpin.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		PinkieSpin.BorderColor3 = Color3.new(0, 0, 0)
		PinkieSpin.BorderSizePixel = 0
		PinkieSpin.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		PinkieSpin.Size = UDim2.new(0, 397, 0, 33)
		PinkieSpin.Font = Enum.Font.SourceSans
		PinkieSpin.Text = ""
		PinkieSpin.TextColor3 = Color3.new(0, 0, 0)
		PinkieSpin.TextSize = 14

		UICorner_26.Parent = PinkieSpin

		TextLabel_21.Parent = PinkieSpin
		TextLabel_21.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_21.BackgroundTransparency = 1
		TextLabel_21.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_21.BorderSizePixel = 0
		TextLabel_21.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_21.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_21.Font = Enum.Font.SourceSans
		TextLabel_21.Text = "Auto Wheel + Bypasses Anti Gambling - Pinky Spin"
		TextLabel_21.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_21.TextSize = 15
		TextLabel_21.TextXAlignment = Enum.TextXAlignment.Left

		WeaponSpin.Name = "WeaponSpin"
		WeaponSpin.Parent = MiscFrame
		WeaponSpin.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		WeaponSpin.BorderColor3 = Color3.new(0, 0, 0)
		WeaponSpin.BorderSizePixel = 0
		WeaponSpin.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		WeaponSpin.Size = UDim2.new(0, 397, 0, 33)
		WeaponSpin.Font = Enum.Font.SourceSans
		WeaponSpin.Text = ""
		WeaponSpin.TextColor3 = Color3.new(0, 0, 0)
		WeaponSpin.TextSize = 14

		UICorner_27.Parent = WeaponSpin

		TextLabel_22.Parent = WeaponSpin
		TextLabel_22.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_22.BackgroundTransparency = 1
		TextLabel_22.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_22.BorderSizePixel = 0
		TextLabel_22.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_22.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_22.Font = Enum.Font.SourceSans
		TextLabel_22.Text = "Auto Wheel + Bypasses Anti Gambling - Weapon Wheel"
		TextLabel_22.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_22.TextSize = 15
		TextLabel_22.TextXAlignment = Enum.TextXAlignment.Left

		GothSpin.Name = "GothSpin"
		GothSpin.Parent = MiscFrame
		GothSpin.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		GothSpin.BorderColor3 = Color3.new(0, 0, 0)
		GothSpin.BorderSizePixel = 0
		GothSpin.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		GothSpin.Size = UDim2.new(0, 397, 0, 33)
		GothSpin.Font = Enum.Font.SourceSans
		GothSpin.Text = ""
		GothSpin.TextColor3 = Color3.new(0, 0, 0)
		GothSpin.TextSize = 14

		UICorner_28.Parent = GothSpin

		TextLabel_23.Parent = GothSpin
		TextLabel_23.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_23.BackgroundTransparency = 1
		TextLabel_23.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_23.BorderSizePixel = 0
		TextLabel_23.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_23.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_23.Font = Enum.Font.SourceSans
		TextLabel_23.Text = "Auto Wheel + Bypasses Anti Gambling - Goth Wheel"
		TextLabel_23.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_23.TextSize = 15
		TextLabel_23.TextXAlignment = Enum.TextXAlignment.Left

		DisableKeybinds.Name = "DisableKeybinds"
		DisableKeybinds.Parent = MiscFrame
		DisableKeybinds.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		DisableKeybinds.BorderColor3 = Color3.new(0, 0, 0)
		DisableKeybinds.BorderSizePixel = 0
		DisableKeybinds.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		DisableKeybinds.Size = UDim2.new(0, 397, 0, 33)
		DisableKeybinds.Font = Enum.Font.SourceSans
		DisableKeybinds.Text = ""
		DisableKeybinds.TextColor3 = Color3.new(0, 0, 0)
		DisableKeybinds.TextSize = 14

		UICorner_29.Parent = DisableKeybinds

		TextLabel_24.Parent = DisableKeybinds
		TextLabel_24.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_24.BackgroundTransparency = 1
		TextLabel_24.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_24.BorderSizePixel = 0
		TextLabel_24.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_24.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_24.Font = Enum.Font.SourceSans
		TextLabel_24.Text = "Disable Keybinds"
		TextLabel_24.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_24.TextSize = 15
		TextLabel_24.TextXAlignment = Enum.TextXAlignment.Left

		AutoClicker.Name = "AutoClicker"
		AutoClicker.Parent = MiscFrame
		AutoClicker.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		AutoClicker.BorderColor3 = Color3.new(0, 0, 0)
		AutoClicker.BorderSizePixel = 0
		AutoClicker.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		AutoClicker.Size = UDim2.new(0, 397, 0, 33)
		AutoClicker.Font = Enum.Font.SourceSans
		AutoClicker.Text = ""
		AutoClicker.TextColor3 = Color3.new(0, 0, 0)
		AutoClicker.TextSize = 14

		UICorner_30.Parent = AutoClicker

		TextLabel_25.Parent = AutoClicker
		TextLabel_25.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_25.BackgroundTransparency = 1
		TextLabel_25.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_25.BorderSizePixel = 0
		TextLabel_25.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_25.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_25.Font = Enum.Font.SourceSans
		TextLabel_25.Text = "Ingame Auto Clicker"
		TextLabel_25.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_25.TextSize = 15
		TextLabel_25.TextXAlignment = Enum.TextXAlignment.Left

		AntiAfk.Name = "AntiAfk"
		AntiAfk.Parent = MiscFrame
		AntiAfk.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		AntiAfk.BorderColor3 = Color3.new(0, 0, 0)
		AntiAfk.BorderSizePixel = 0
		AntiAfk.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		AntiAfk.Size = UDim2.new(0, 397, 0, 33)
		AntiAfk.Font = Enum.Font.SourceSans
		AntiAfk.Text = ""
		AntiAfk.TextColor3 = Color3.new(0, 0, 0)
		AntiAfk.TextSize = 14

		UICorner_31.Parent = AntiAfk

		TextLabel_26.Parent = AntiAfk
		TextLabel_26.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_26.BackgroundTransparency = 1
		TextLabel_26.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_26.BorderSizePixel = 0
		TextLabel_26.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_26.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_26.Font = Enum.Font.SourceSans
		TextLabel_26.Text = "Anti Afk"
		TextLabel_26.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_26.TextSize = 15
		TextLabel_26.TextXAlignment = Enum.TextXAlignment.Left

		NoSlow.Name = "NoSlow"
		NoSlow.Parent = MiscFrame
		NoSlow.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		NoSlow.BorderColor3 = Color3.new(0, 0, 0)
		NoSlow.BorderSizePixel = 0
		NoSlow.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		NoSlow.Size = UDim2.new(0, 397, 0, 33)
		NoSlow.Font = Enum.Font.SourceSans
		NoSlow.Text = ""
		NoSlow.TextColor3 = Color3.new(0, 0, 0)
		NoSlow.TextSize = 14

		UICorner_32.Parent = NoSlow

		FightWithoutSlowing.Name = "FightWithoutSlowing"
		FightWithoutSlowing.Parent = NoSlow
		FightWithoutSlowing.BackgroundColor3 = Color3.new(1, 1, 1)
		FightWithoutSlowing.BackgroundTransparency = 1
		FightWithoutSlowing.BorderColor3 = Color3.new(0, 0, 0)
		FightWithoutSlowing.BorderSizePixel = 0
		FightWithoutSlowing.Position = UDim2.new(0.0302267, 0, 0, 0)
		FightWithoutSlowing.Size = UDim2.new(0, 385, 0, 33)
		FightWithoutSlowing.Font = Enum.Font.SourceSans
		FightWithoutSlowing.Text = "Fight without slowing down"
		FightWithoutSlowing.TextColor3 = Color3.new(1, 1, 1)
		FightWithoutSlowing.TextSize = 15
		FightWithoutSlowing.TextXAlignment = Enum.TextXAlignment.Left

		Reset.Name = "Reset"
		Reset.Parent = MiscFrame
		Reset.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		Reset.BorderColor3 = Color3.new(0, 0, 0)
		Reset.BorderSizePixel = 0
		Reset.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		Reset.Size = UDim2.new(0, 397, 0, 33)
		Reset.Font = Enum.Font.SourceSans
		Reset.Text = ""
		Reset.TextColor3 = Color3.new(0, 0, 0)
		Reset.TextSize = 14

		UICorner_33.Parent = Reset

		TextLabel_27.Parent = Reset
		TextLabel_27.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_27.BackgroundTransparency = 1
		TextLabel_27.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_27.BorderSizePixel = 0
		TextLabel_27.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_27.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_27.Font = Enum.Font.SourceSans
		TextLabel_27.Text = "Reset"
		TextLabel_27.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_27.TextSize = 15
		TextLabel_27.TextXAlignment = Enum.TextXAlignment.Left

		CopyDiscord.Name = "CopyDiscord"
		CopyDiscord.Parent = MiscFrame
		CopyDiscord.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		CopyDiscord.BorderColor3 = Color3.new(0, 0, 0)
		CopyDiscord.BorderSizePixel = 0
		CopyDiscord.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		CopyDiscord.Size = UDim2.new(0, 397, 0, 33)
		CopyDiscord.Font = Enum.Font.SourceSans
		CopyDiscord.Text = ""
		CopyDiscord.TextColor3 = Color3.new(0, 0, 0)
		CopyDiscord.TextSize = 14

		UICorner_34.Parent = CopyDiscord

		TextLabel_28.Parent = CopyDiscord
		TextLabel_28.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_28.BackgroundTransparency = 1
		TextLabel_28.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_28.BorderSizePixel = 0
		TextLabel_28.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_28.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_28.Font = Enum.Font.SourceSans
		TextLabel_28.Text = "Copy Disocrd Invite"
		TextLabel_28.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_28.TextSize = 15
		TextLabel_28.TextXAlignment = Enum.TextXAlignment.Left

		FarmingFrame.Name = "FarmingFrame"
		FarmingFrame.Parent = MainFrame
		FarmingFrame.Active = true
		FarmingFrame.BackgroundColor3 = Color3.new(1, 1, 1)
		FarmingFrame.BackgroundTransparency = 1
		FarmingFrame.BorderColor3 = Color3.new(0, 0, 0)
		FarmingFrame.BorderSizePixel = 0
		FarmingFrame.Position = UDim2.new(0.285008252, 0, 0.104347825, 0)
		FarmingFrame.Size = UDim2.new(0, 415, 0, 509)
		FarmingFrame.Visible = false
		FarmingFrame.BottomImage = ""
		FarmingFrame.MidImage = ""
		FarmingFrame.TopImage = ""

		UIPadding_5.Parent = FarmingFrame
		UIPadding_5.PaddingLeft = UDim.new(0.00999999978, 0)
		UIPadding_5.PaddingTop = UDim.new(0.00999999978, 0)

		UIListLayout_5.Parent = FarmingFrame
		UIListLayout_5.SortOrder = Enum.SortOrder.LayoutOrder
		UIListLayout_5.Padding = UDim.new(0.00700000022, 0)

		SlayFarm.Name = "SlayFarm"
		SlayFarm.Parent = FarmingFrame
		SlayFarm.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		SlayFarm.BorderColor3 = Color3.new(0, 0, 0)
		SlayFarm.BorderSizePixel = 0
		SlayFarm.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		SlayFarm.Size = UDim2.new(0, 397, 0, 33)
		SlayFarm.Font = Enum.Font.SourceSans
		SlayFarm.Text = ""
		SlayFarm.TextColor3 = Color3.new(0, 0, 0)
		SlayFarm.TextSize = 14

		UICorner_35.Parent = SlayFarm

		TextLabel_29.Parent = SlayFarm
		TextLabel_29.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_29.BackgroundTransparency = 1
		TextLabel_29.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_29.BorderSizePixel = 0
		TextLabel_29.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_29.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_29.Font = Enum.Font.SourceSans
		TextLabel_29.Text = "Slay Farm - No Work For Mobile"
		TextLabel_29.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_29.TextSize = 16
		TextLabel_29.TextXAlignment = Enum.TextXAlignment.Left

		KillAll1.Name = "KillAll1"
		KillAll1.Parent = SlayFarm
		KillAll1.BackgroundColor3 = Color3.new(0.0980392, 0.129412, 0.196078)
		KillAll1.BorderColor3 = Color3.new(0, 0, 0)
		KillAll1.BorderSizePixel = 0
		KillAll1.Position = UDim2.new(0.544080615, 0, 0.124837242, 0)
		KillAll1.Size = UDim2.new(0, 172, 0, 24)
		KillAll1.Font = Enum.Font.SourceSans
		KillAll1.Text = ""
		KillAll1.TextColor3 = Color3.new(0, 0, 0)
		KillAll1.TextSize = 14

		UICorner_36.Parent = KillAll1

		TextLabel_30.Parent = KillAll1
		TextLabel_30.BackgroundColor3 = Color3.new(0.666667, 0, 0)
		TextLabel_30.BackgroundTransparency = 1
		TextLabel_30.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_30.BorderSizePixel = 0
		TextLabel_30.Position = UDim2.new(0, 0, 0.0416666679, 0)
		TextLabel_30.Size = UDim2.new(0, 172, 0, 23)
		TextLabel_30.Font = Enum.Font.SourceSans
		TextLabel_30.Text = "Dont fall dead after stomping & Auto heal"
		TextLabel_30.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_30.TextScaled = true
		TextLabel_30.TextSize = 16
		TextLabel_30.TextWrapped = true
		TextLabel_30.TextXAlignment = Enum.TextXAlignment.Left

		ATMFarm.Name = "ATMFarm"
		ATMFarm.Parent = FarmingFrame
		ATMFarm.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		ATMFarm.BorderColor3 = Color3.new(0, 0, 0)
		ATMFarm.BorderSizePixel = 0
		ATMFarm.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		ATMFarm.Size = UDim2.new(0, 397, 0, 33)
		ATMFarm.Font = Enum.Font.SourceSans
		ATMFarm.Text = ""
		ATMFarm.TextColor3 = Color3.new(0, 0, 0)
		ATMFarm.TextSize = 14

		UICorner_37.Parent = ATMFarm

		TextLabel_31.Parent = ATMFarm
		TextLabel_31.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_31.BackgroundTransparency = 1
		TextLabel_31.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_31.BorderSizePixel = 0
		TextLabel_31.Position = UDim2.new(0.0302267, 0, -0.0303030312, 0)
		TextLabel_31.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_31.Font = Enum.Font.SourceSans
		TextLabel_31.Text = "ATM Farm - No Work For Mobile But You Can use ingame AutoClicker"
		TextLabel_31.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_31.TextSize = 15
		TextLabel_31.TextWrapped = true
		TextLabel_31.TextXAlignment = Enum.TextXAlignment.Left

		TextLabel_32.Parent = FarmingFrame
		TextLabel_32.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_32.BackgroundTransparency = 1
		TextLabel_32.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_32.BorderSizePixel = 0
		TextLabel_32.Position = UDim2.new(0.0302267, 0, -0.0303030312, 0)
		TextLabel_32.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_32.Font = Enum.Font.SourceSans
		TextLabel_32.Text = "I recomand using a Auto Clicker (Theres one in Misc)"
		TextLabel_32.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_32.TextSize = 16
		TextLabel_32.TextXAlignment = Enum.TextXAlignment.Left

		PlayerFrame.Name = "PlayerFrame"
		PlayerFrame.Parent = MainFrame
		PlayerFrame.Active = true
		PlayerFrame.BackgroundColor3 = Color3.new(1, 1, 1)
		PlayerFrame.BackgroundTransparency = 1
		PlayerFrame.BorderColor3 = Color3.new(0, 0, 0)
		PlayerFrame.BorderSizePixel = 0
		PlayerFrame.Position = UDim2.new(0.285008252, 0, 0.104347825, 0)
		PlayerFrame.Size = UDim2.new(0, 415, 0, 509)
		PlayerFrame.Visible = false
		PlayerFrame.BottomImage = ""
		PlayerFrame.MidImage = ""
		PlayerFrame.TopImage = ""

		PlayerFrame_2.Name = "PlayerFrame"
		PlayerFrame_2.Parent = PlayerFrame
		PlayerFrame_2.BackgroundColor3 = Color3.new(0.105882, 0.121569, 0.164706)
		PlayerFrame_2.BorderColor3 = Color3.new(0, 0, 0)
		PlayerFrame_2.BorderSizePixel = 0
		PlayerFrame_2.Position = UDim2.new(5.91911764e-08, 0, 0.0413827263, 0)
		PlayerFrame_2.Size = UDim2.new(0, 397, 0, 32)

		UICorner_38.Parent = PlayerFrame_2

		PlayerButton_2.Name = "PlayerButton"
		PlayerButton_2.Parent = PlayerFrame_2
		PlayerButton_2.BackgroundColor3 = Color3.new(1, 1, 1)
		PlayerButton_2.BackgroundTransparency = 0.949999988079071
		PlayerButton_2.BorderColor3 = Color3.new(0, 0, 0)
		PlayerButton_2.BorderSizePixel = 0
		PlayerButton_2.Position = UDim2.new(-0.0311617739, 0, -0.033670444, 0)
		PlayerButton_2.Size = UDim2.new(0, 397, 0, 30)
		PlayerButton_2.Font = Enum.Font.SourceSans
		PlayerButton_2.Text = "Click here for player list"
		PlayerButton_2.TextColor3 = Color3.new(1, 1, 1)
		PlayerButton_2.TextSize = 14

		UIPadding_6.Parent = PlayerFrame_2
		UIPadding_6.PaddingTop = UDim.new(0.00999999978, 0)

		UIListLayout_6.Parent = PlayerFrame_2
		UIListLayout_6.SortOrder = Enum.SortOrder.LayoutOrder

		UIPadding_7.Parent = PlayerFrame
		UIPadding_7.PaddingLeft = UDim.new(0.00999999978, 0)
		UIPadding_7.PaddingTop = UDim.new(0.00999999978, 0)

		UIListLayout_7.Parent = PlayerFrame
		UIListLayout_7.SortOrder = Enum.SortOrder.LayoutOrder
		UIListLayout_7.Padding = UDim.new(0.00700000022, 0)

		SpectateButton.Name = "SpectateButton"
		SpectateButton.Parent = PlayerFrame
		SpectateButton.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		SpectateButton.BorderColor3 = Color3.new(0, 0, 0)
		SpectateButton.BorderSizePixel = 0
		SpectateButton.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		SpectateButton.Size = UDim2.new(0, 397, 0, 33)
		SpectateButton.Font = Enum.Font.SourceSans
		SpectateButton.Text = ""
		SpectateButton.TextColor3 = Color3.new(0, 0, 0)
		SpectateButton.TextSize = 14

		UICorner_39.Parent = SpectateButton

		TextLabel_33.Parent = SpectateButton
		TextLabel_33.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_33.BackgroundTransparency = 1
		TextLabel_33.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_33.BorderSizePixel = 0
		TextLabel_33.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_33.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_33.Font = Enum.Font.SourceSans
		TextLabel_33.Text = "Spectate Person"
		TextLabel_33.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_33.TextSize = 16
		TextLabel_33.TextXAlignment = Enum.TextXAlignment.Left

		GrabPlayerToVoidButton.Name = "GrabPlayerToVoidButton"
		GrabPlayerToVoidButton.Parent = PlayerFrame
		GrabPlayerToVoidButton.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		GrabPlayerToVoidButton.BorderColor3 = Color3.new(0, 0, 0)
		GrabPlayerToVoidButton.BorderSizePixel = 0
		GrabPlayerToVoidButton.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		GrabPlayerToVoidButton.Size = UDim2.new(0, 397, 0, 33)
		GrabPlayerToVoidButton.Font = Enum.Font.SourceSans
		GrabPlayerToVoidButton.Text = ""
		GrabPlayerToVoidButton.TextColor3 = Color3.new(0, 0, 0)
		GrabPlayerToVoidButton.TextSize = 14

		UICorner_40.Parent = GrabPlayerToVoidButton

		TextLabel_34.Parent = GrabPlayerToVoidButton
		TextLabel_34.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_34.BackgroundTransparency = 1
		TextLabel_34.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_34.BorderSizePixel = 0
		TextLabel_34.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_34.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_34.Font = Enum.Font.SourceSans
		TextLabel_34.Text = "Grab User To Void"
		TextLabel_34.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_34.TextSize = 16
		TextLabel_34.TextXAlignment = Enum.TextXAlignment.Left

		KillUserButton.Name = "KillUserButton"
		KillUserButton.Parent = PlayerFrame
		KillUserButton.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		KillUserButton.BorderColor3 = Color3.new(0, 0, 0)
		KillUserButton.BorderSizePixel = 0
		KillUserButton.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		KillUserButton.Size = UDim2.new(0, 397, 0, 33)
		KillUserButton.Font = Enum.Font.SourceSans
		KillUserButton.Text = ""
		KillUserButton.TextColor3 = Color3.new(0, 0, 0)
		KillUserButton.TextSize = 14

		UICorner_41.Parent = KillUserButton

		TextLabel_35.Parent = KillUserButton
		TextLabel_35.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_35.BackgroundTransparency = 1
		TextLabel_35.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_35.BorderSizePixel = 0
		TextLabel_35.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_35.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_35.Font = Enum.Font.SourceSans
		TextLabel_35.Text = "Kill User AutoClicker Recomanded in Misc"
		TextLabel_35.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_35.TextSize = 16
		TextLabel_35.TextXAlignment = Enum.TextXAlignment.Left

		TaserPersonButton.Name = "TaserPersonButton"
		TaserPersonButton.Parent = PlayerFrame
		TaserPersonButton.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		TaserPersonButton.BorderColor3 = Color3.new(0, 0, 0)
		TaserPersonButton.BorderSizePixel = 0
		TaserPersonButton.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		TaserPersonButton.Size = UDim2.new(0, 397, 0, 33)
		TaserPersonButton.Font = Enum.Font.SourceSans
		TaserPersonButton.Text = ""
		TaserPersonButton.TextColor3 = Color3.new(0, 0, 0)
		TaserPersonButton.TextSize = 14

		UICorner_42.Parent = TaserPersonButton

		TextLabel_36.Parent = TaserPersonButton
		TextLabel_36.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_36.BackgroundTransparency = 1
		TextLabel_36.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_36.BorderSizePixel = 0
		TextLabel_36.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_36.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_36.Font = Enum.Font.SourceSans
		TextLabel_36.Text = "Taser Person"
		TextLabel_36.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_36.TextSize = 16
		TextLabel_36.TextXAlignment = Enum.TextXAlignment.Left

		WantedPlayerFrame.Name = "WantedPlayerFrame"
		WantedPlayerFrame.Parent = PlayerFrame
		WantedPlayerFrame.BackgroundColor3 = Color3.new(0.105882, 0.121569, 0.164706)
		WantedPlayerFrame.BorderColor3 = Color3.new(0, 0, 0)
		WantedPlayerFrame.BorderSizePixel = 0
		WantedPlayerFrame.Position = UDim2.new(5.91911764e-08, 0, 0.0413827263, 0)
		WantedPlayerFrame.Size = UDim2.new(0, 397, 0, 32)

		UICorner_43.Parent = WantedPlayerFrame

		PlayerButton_3.Name = "PlayerButton"
		PlayerButton_3.Parent = WantedPlayerFrame
		PlayerButton_3.BackgroundColor3 = Color3.new(1, 1, 1)
		PlayerButton_3.BackgroundTransparency = 0.949999988079071
		PlayerButton_3.BorderColor3 = Color3.new(0, 0, 0)
		PlayerButton_3.BorderSizePixel = 0
		PlayerButton_3.Position = UDim2.new(-0.0311617739, 0, -0.033670444, 0)
		PlayerButton_3.Size = UDim2.new(0, 397, 0, 30)
		PlayerButton_3.Font = Enum.Font.SourceSans
		PlayerButton_3.Text = "Click Here For Wanted Player List"
		PlayerButton_3.TextColor3 = Color3.new(1, 1, 1)
		PlayerButton_3.TextSize = 14

		UIPadding_8.Parent = WantedPlayerFrame
		UIPadding_8.PaddingTop = UDim.new(0.00999999978, 0)

		UIListLayout_8.Parent = WantedPlayerFrame
		UIListLayout_8.SortOrder = Enum.SortOrder.LayoutOrder

		ArrestPersonButton.Name = "ArrestPersonButton"
		ArrestPersonButton.Parent = PlayerFrame
		ArrestPersonButton.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		ArrestPersonButton.BorderColor3 = Color3.new(0, 0, 0)
		ArrestPersonButton.BorderSizePixel = 0
		ArrestPersonButton.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		ArrestPersonButton.Size = UDim2.new(0, 397, 0, 33)
		ArrestPersonButton.Font = Enum.Font.SourceSans
		ArrestPersonButton.Text = ""
		ArrestPersonButton.TextColor3 = Color3.new(0, 0, 0)
		ArrestPersonButton.TextSize = 14

		UICorner_44.Parent = ArrestPersonButton

		TextLabel_37.Parent = ArrestPersonButton
		TextLabel_37.BackgroundColor3 = Color3.new(1, 1, 1)
		TextLabel_37.BackgroundTransparency = 1
		TextLabel_37.BorderColor3 = Color3.new(0, 0, 0)
		TextLabel_37.BorderSizePixel = 0
		TextLabel_37.Position = UDim2.new(0.0302267, 0, 0, 0)
		TextLabel_37.Size = UDim2.new(0, 385, 0, 33)
		TextLabel_37.Font = Enum.Font.SourceSans
		TextLabel_37.Text = "Arrest Target"
		TextLabel_37.TextColor3 = Color3.new(1, 1, 1)
		TextLabel_37.TextSize = 16
		TextLabel_37.TextXAlignment = Enum.TextXAlignment.Left

		BuyFrame.Name = "BuyFrame"
		BuyFrame.Parent = MainFrame
		BuyFrame.Active = true
		BuyFrame.BackgroundColor3 = Color3.new(1, 1, 1)
		BuyFrame.BackgroundTransparency = 1
		BuyFrame.BorderColor3 = Color3.new(0, 0, 0)
		BuyFrame.BorderSizePixel = 0
		BuyFrame.Position = UDim2.new(0.285008252, 0, 0.104347825, 0)
		BuyFrame.Size = UDim2.new(0, 415, 0, 509)
		BuyFrame.Visible = false
		BuyFrame.BottomImage = ""
		BuyFrame.MidImage = ""
		BuyFrame.TopImage = ""

		List1.Name = "List1"
		List1.Parent = BuyFrame
		List1.BackgroundColor3 = Color3.new(0.117647, 0.156863, 0.235294)
		List1.BorderColor3 = Color3.new(0, 0, 0)
		List1.BorderSizePixel = 0
		List1.Position = UDim2.new(5.91911764e-08, 0, 0.00362531701, 0)
		List1.Size = UDim2.new(0, 397, 0, 33)
		List1.Font = Enum.Font.SourceSans
		List1.Text = ""
		List1.TextColor3 = Color3.new(1, 1, 1)
		List1.TextSize = 14

		UICorner_45.Parent = List1

		UIPadding_9.Parent = BuyFrame
		UIPadding_9.PaddingLeft = UDim.new(0.00999999978, 0)
		UIPadding_9.PaddingTop = UDim.new(0.00999999978, 0)

		UIListLayout_9.Parent = BuyFrame
		UIListLayout_9.SortOrder = Enum.SortOrder.LayoutOrder
		UIListLayout_9.Padding = UDim.new(0.00700000022, 0)

		-- Scripts

		local function TAOBR_fake_script() -- DivazScript.GUI 
			local script = Instance.new('LocalScript', DivazScript)

			local gui = script.Parent
			local mainFrame = gui.MainFrame
			local navBar = mainFrame.NavBar
			local topFrame = mainFrame.Frame
			local UserInputService = game:GetService("UserInputService")

			local dragging = false
			local dragInput
			local dragStart
			local startPos

			local function update(input)
				local delta = input.Position - dragStart
				mainFrame.Position = UDim2.new(
					startPos.X.Scale, startPos.X.Offset + delta.X,
					startPos.Y.Scale, startPos.Y.Offset + delta.Y
				)
			end

			local function setupDragging(frame)
				frame.InputBegan:Connect(function(input)
					if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
						dragging = true
						dragStart = input.Position
						startPos = mainFrame.Position
						input.Changed:Connect(function()
							if input.UserInputState == Enum.UserInputState.End then
								dragging = false
							end
						end)
					end
				end)
				frame.InputChanged:Connect(function(input)
					if input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch then
						dragInput = input
					end
				end)
			end

			setupDragging(mainFrame)
			setupDragging(topFrame)

			local frames = {
				mainFrame.CombatFrame,
				mainFrame.EspFrame,
				mainFrame.MiscFrame,
				mainFrame.BuyFrame,
				mainFrame.PlayerFrame,
				mainFrame.FarmingFrame
			}

			local buttons = {
				navBar.CombatButton,
				navBar.EspButton,
				navBar.MiscButton,
				navBar.BuyButton,
				navBar.PlayerButton,
				navBar.FarmButton
			}

			local buttonConnections = {}

			local function disableFrameButtons(frame)
				for _, child in ipairs(frame:GetDescendants()) do
					if child:IsA("TextButton") or child:IsA("ImageButton") then
						if buttonConnections[child] then
							buttonConnections[child]:Disconnect()
						end
						buttonConnections[child] = child.MouseButton1Click:Connect(function() end)
					end
				end
			end

			local function enableFrameButtons(frame)
				for _, child in ipairs(frame:GetDescendants()) do
					if child:IsA("TextButton") or child:IsA("ImageButton") then
						if buttonConnections[child] then
							buttonConnections[child]:Disconnect()
							buttonConnections[child] = nil
						end
					end
				end
			end

			local function switchFrame(targetFrame)
				for i, frame in ipairs(frames) do
					if frame == targetFrame then
						frame.ZIndex = 2
						frame.Visible = true
						frame.Selectable = true
						enableFrameButtons(frame)
					else
						frame.ZIndex = 1
						frame.Visible = false
						frame.Selectable = false
						disableFrameButtons(frame)
					end
				end
				for i, button in ipairs(buttons) do
					if frames[i] == targetFrame then
						button.TextColor3 = Color3.fromRGB(255, 255, 255)
					else
						button.TextColor3 = Color3.fromRGB(177, 177, 177)
					end
				end
			end

			for i, button in ipairs(buttons) do
				button.MouseButton1Click:Connect(function()
					switchFrame(frames[i])
				end)
			end

			switchFrame(frames[1])

			UserInputService.InputChanged:Connect(function(input)
				if input == dragInput and dragging then
					update(input)
				end
			end)

		end
		coroutine.wrap(TAOBR_fake_script)()
		local function AJLHM_fake_script() -- DivazScript.LocalScript 
			local script = Instance.new('LocalScript', DivazScript)

			loadstring(game:HttpGet("https://raw.githubusercontent.com/wiet32522/Baddiesgold/refs/heads/main/ScriptVersionDivaz"))()
		end
		coroutine.wrap(AJLHM_fake_script)()
		local function ASSKCF_fake_script() -- DivazScript.LocalScript 
			local script = Instance.new('LocalScript', DivazScript)

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")
			local StarterGui = game:GetService("StarterGui")

			local LocalPlayer = Players.LocalPlayer
			local targetRemote = ReplicatedStorage:WaitForChild("Event", 10)

			getgenv().LoggedKeys = {
				ATMHitKey = nil,
				StompKey = nil
			}
			getgenv().KeysLogged = false

			local mainFrameCache = nil
			do
				if script.Parent and script.Parent.Parent:IsA("ScreenGui") then
					mainFrameCache = script.Parent.Parent:FindFirstChild("MainFrame")
				end
				if not mainFrameCache then
					for _, screen in ipairs(LocalPlayer.PlayerGui:GetChildren()) do
						if screen:IsA("ScreenGui") then
							mainFrameCache = screen:FindFirstChild("MainFrame")
							if mainFrameCache then break end
						end
					end
				end
			end

			local function enableMainFrameSafe()
				if not mainFrameCache then return end
				pcall(function()
					mainFrameCache.Visible = true
					mainFrameCache.Enabled = true
					mainFrameCache.Active = true
					mainFrameCache.Transparency = 0
					for _, child in ipairs(mainFrameCache:GetDescendants()) do
						if child:IsA("GuiObject") then
							child.Visible = true
							child.Active = true
							child.Transparency = 0
						end
					end
				end)
			end

			local function notify(title, text)
				pcall(function()
					StarterGui:SetCore("SendNotification", {
						Title = title;
						Text = text;
						Duration = 5;
					})
				end)
			end

			local mt = getrawmetatable(game)
			local oldNamecall = mt.__namecall
			setreadonly(mt, false)

			mt.__namecall = newcclosure(function(self, ...)
				local method = getnamecallmethod()
				local args = {...}

				if getgenv().KeysLogged then
					return oldNamecall(self, ...)
				end

				if self ~= targetRemote or method ~= "FireServer" then
					return oldNamecall(self, ...)
				end

				local firstArg = args[1]
				local eventData = nil
				if typeof(firstArg) == "table" then
					if typeof(firstArg[1]) == "table" and firstArg[1].Key and firstArg[1].Event then
						eventData = firstArg[1]
					elseif firstArg.Key and firstArg.Event then
						eventData = firstArg
					end
				end

				if not eventData then
					return oldNamecall(self, ...)
				end

				local eventType = eventData.Event:lower()
				local capturedKey = eventData.Key

				if eventType == "hit" and not getgenv().LoggedKeys.ATMHitKey then
					getgenv().LoggedKeys.ATMHitKey = capturedKey
					notify("KEY LOGGED", "ATM Hit Key Saved")
					if getgenv().LoggedKeys.StompKey then
						getgenv().KeysLogged = true
						notify("DONE", "All Keys Logged | UI Enabled")
						enableMainFrameSafe()
					else
						notify("NEXT STEP", "Now click E/Stomp button")
					end
				elseif eventType == "stomp" and not getgenv().LoggedKeys.StompKey then
					getgenv().LoggedKeys.StompKey = capturedKey
					notify("KEY LOGGED", "Stomp Key Saved")
					if getgenv().LoggedKeys.ATMHitKey then
						getgenv().KeysLogged = true
						notify("DONE", "All Remotes Logged | UI Enabled")
						enableMainFrameSafe()
					else
						notify("NEXT STEP", "Now punch once")
					end
				end

				return oldNamecall(self, ...)
			end)

			setreadonly(mt, true)

			notify("INSTRUCTION", "Punch once, then click E/Stomp once to log keys.")
		end
		coroutine.wrap(ASSKCF_fake_script)()
		local function RKAJF_fake_script() -- Frame_3.LocalScript 
			local script = Instance.new('LocalScript', Frame_3)

			local ReplicatedStorage = game:GetService("ReplicatedStorage")

			local Icon = require(
				ReplicatedStorage:WaitForChild("Modules")
					:WaitForChild("Icon")
					:WaitForChild("VERSION")
			)

			local frame = script.Parent
			local versionLabel = frame:WaitForChild("VersionLabel")
			local riskLabel = frame:WaitForChild("RiskLabel")

			local currentVersion = string.gsub(Icon, "^v", "")

			local latestVersion = "3.0.2"

			versionLabel.Text = "Game Version: " .. currentVersion

			riskLabel.Visible = (currentVersion ~= latestVersion)
		end
		coroutine.wrap(RKAJF_fake_script)()
		local function DYIDAXG_fake_script() -- AutoStomp.LocalScript 
			local script = Instance.new('LocalScript', AutoStomp)

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")
			local RunService = game:GetService("RunService")

			local LocalPlayer = Players.LocalPlayer
			local button = script.Parent

			getgenv().LoggedKeys = getgenv().LoggedKeys or {ATMHitKey = nil, StompKey = nil}
			getgenv().KeysLogged = getgenv().KeysLogged or false

			local oldStroke = button:FindFirstChild("UIStroke")
			if oldStroke then oldStroke:Destroy() end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255, 255, 255)

			local scriptEnabled = false
			local stompLoop = nil

			local Remote = ReplicatedStorage:WaitForChild("Event")

			local function fireStomp()
				if not getgenv().LoggedKeys.StompKey then return end
				Remote:FireServer({
					Key = getgenv().LoggedKeys.StompKey,
					Event = "Stomp"
				})
			end

			local function getCharacter(player)
				return player.Character
			end

			local function getHRP(char)
				return char and char:FindFirstChild("HumanoidRootPart")
			end

			local function getHumanoid(char)
				return char and char:FindFirstChildOfClass("Humanoid")
			end

			local function startScript()
				if not getgenv().KeysLogged or not getgenv().LoggedKeys.StompKey then
					scriptEnabled = false
					uiStroke.Color = Color3.fromRGB(255, 255, 255)
					return
				end

				stompLoop = task.spawn(function()
					while task.wait(0.05) do
						if not scriptEnabled then break end

						local localChar = getCharacter(LocalPlayer)
						local localHRP = getHRP(localChar)

						if not localHRP then continue end

						for _, player in ipairs(Players:GetPlayers()) do
							if player ~= LocalPlayer then
								local targetChar = getCharacter(player)
								local targetHRP = getHRP(targetChar)
								local targetHum = getHumanoid(targetChar)

								if targetHRP and targetHum then
									local distance = (localHRP.Position - targetHRP.Position).Magnitude
									local health = targetHum.Health

									if distance <= 5 and health <= 3 and health > 0 then
										fireStomp()
									end
								end
							end
						end
					end
				end)
			end

			local function stopScript()
				if stompLoop then task.cancel(stompLoop) end
				stompLoop = nil
			end

			button.MouseButton1Click:Connect(function()
				scriptEnabled = not scriptEnabled
				uiStroke.Color = if scriptEnabled then Color3.fromRGB(0, 255, 0) else Color3.fromRGB(255, 255, 255)

				if scriptEnabled then
					startScript()
				else
					stopScript()
				end
			end)

			LocalPlayer.CharacterAdded:Connect(function()
				if scriptEnabled then
					stopScript()
					startScript()
				end
			end)
		end
		coroutine.wrap(DYIDAXG_fake_script)()
		local function BOAQ_fake_script() -- AutoFight.LocalScript 
			local script = Instance.new('LocalScript', AutoFight)

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")
			local UserInputService = game:GetService("UserInputService")

			local LocalPlayer = Players.LocalPlayer
			local button = script.Parent

			getgenv().LoggedKeys = getgenv().LoggedKeys or {ATMHitKey = nil, StompKey = nil}
			getgenv().KeysLogged = getgenv().KeysLogged or false

			local oldStroke = button:FindFirstChild("UIStroke")
			if oldStroke then oldStroke:Destroy() end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Color = Color3.fromRGB(255,255,255)
			uiStroke.Thickness = 0.5

			local running = false
			local loopThread

			local function spamHit(char)
				if not char or not getgenv().LoggedKeys.ATMHitKey then return end
				ReplicatedStorage.Event:FireServer({
					Key = getgenv().LoggedKeys.ATMHitKey,
					Event = "Hit",
					ClientHitbox = {char}
				})
			end

			local function start()
				if running or not getgenv().KeysLogged or not getgenv().LoggedKeys.ATMHitKey then
					return
				end

				running = true
				uiStroke.Color = Color3.fromRGB(0,255,0)

				loopThread = task.spawn(function()
					while running do
						for _, plr in ipairs(Players:GetPlayers()) do
							if plr ~= LocalPlayer and plr.Character then
								pcall(spamHit, plr.Character)
							end
						end
						task.wait(0.15)
					end
				end)
			end

			local function stop()
				running = false
				uiStroke.Color = Color3.fromRGB(255,255,255)
				if loopThread then
					task.cancel(loopThread)
					loopThread = nil
				end
			end

			local function toggle()
				if running then
					stop()
				else
					start()
				end
			end

			button.MouseButton1Click:Connect(toggle)

			UserInputService.InputBegan:Connect(function(input, gameProcessed)
				if gameProcessed then
					return
				end

				if _G.keybindsBlocked then
					return
				end

				if input.KeyCode == Enum.KeyCode.H then
					toggle()
				end
			end)
		end
		coroutine.wrap(BOAQ_fake_script)()
		local function ASBID_fake_script() -- SpamGrabHair.LocalScript 
			local script = Instance.new('LocalScript', SpamGrabHair)

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")

			local LocalPlayer = Players.LocalPlayer
			local button = script.Parent

			local oldStroke = button:FindFirstChild("UIStroke")

			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Color = Color3.fromRGB(255,255,255)
			uiStroke.Thickness = 0.5

			local running = false
			local loopThread

			local function spamGrab()
				local args = {
					{
						Event = "Grab",
						ClientHitbox = {}
					}
				}
				ReplicatedStorage:WaitForChild("Event"):FireServer(unpack(args))
			end

			local function start()
				if running then
					return
				end

				running = true

				uiStroke.Color = Color3.fromRGB(0,255,0)

				loopThread = task.spawn(function()
					while running do
						pcall(spamGrab)
						task.wait(0.15)
					end
				end)
			end

			local function stop()
				running = false

				uiStroke.Color = Color3.fromRGB(255,255,255)

				if loopThread then
					task.cancel(loopThread)
					loopThread = nil
				end
			end

			local function toggle()
				if running then
					stop()
				else
					start()
				end
			end

			button.MouseButton1Click:Connect(toggle)
		end
		coroutine.wrap(ASBID_fake_script)()
		local function NCIJQSE_fake_script() -- Heal.LocalScript 
			local script = Instance.new('LocalScript', Heal)

			local Players = game:GetService("Players")
			local Workspace = game:GetService("Workspace")
			local VirtualUser = game:GetService("VirtualUser")
			local RunService = game:GetService("RunService")

			local player = Players.LocalPlayer
			local character = player.Character or player.CharacterAdded:Wait()
			local humanoid = character:WaitForChild("Humanoid")
			local rootPart = character:WaitForChild("HumanoidRootPart")
			local button = script.Parent

			local TextBox = button:WaitForChild("TextBox")
			TextBox.Text = "30"

			local oldStroke = button:FindFirstChild("UIStroke")
			if oldStroke then oldStroke:Destroy() end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255, 255, 255)

			local scriptEnabled = false
			local targetPrompt = nil
			local targetAttach = nil
			local tpLoop = nil
			local spamLoop = nil

			local function getHealThreshold()
				local text = TextBox.Text
				local num = tonumber(text)
				if num then
					return math.clamp(num, 0, 100)
				end
				return 30
			end

			local function setupTargets()
				local Map = Workspace:FindFirstChild("Map")
				if not Map then return end
				local Buildings = Map:FindFirstChild("Buildings")
				if not Buildings then return end

				targetPrompt = nil
				targetAttach = nil

				for _, desc in ipairs(Buildings:GetDescendants()) do
					if desc:IsA("Model") and desc.Name == "HospitalHeal" then
						local mainMesh = desc:FindFirstChild("Main", true)
						if mainMesh and mainMesh:IsA("MeshPart") then
							local hasOccupiedSeat = false
							for _, child in ipairs(desc:GetDescendants()) do
								if child:IsA("Seat") and child.Occupant ~= nil then
									hasOccupiedSeat = true
									break
								end
							end
							if not hasOccupiedSeat then
								local attachment = mainMesh:FindFirstChild("Attachment", true)
								if attachment then
									local healPrompt = attachment:FindFirstChild("HealHospital")
									if healPrompt and healPrompt:IsA("ProximityPrompt") then
										targetPrompt = healPrompt
										targetAttach = attachment
										targetPrompt.MaxActivationDistance = math.huge
										targetPrompt.HoldDuration = 0
										break
									end
								end
							end
						end
					end
				end
			end

			local function startScript()
				setupTargets()
				if not targetPrompt or not targetAttach then return end

				tpLoop = task.spawn(function()
					while task.wait(0.1) do
						if not scriptEnabled then break end

						local threshold = getHealThreshold()

						if humanoid.Health <= threshold and targetAttach and rootPart then
							rootPart.CFrame = targetAttach.WorldCFrame
						end
					end
				end)

				spamLoop = task.spawn(function()
					while task.wait() do
						if not scriptEnabled then break end

						local threshold = getHealThreshold()

						if humanoid.Health <= threshold then
							if targetPrompt then
								fireproximityprompt(targetPrompt)
							end
						end

						if humanoid.Health >= 100 then
							VirtualUser:Button1Down(Vector2.new(0,0), Workspace.CurrentCamera.CFrame)
							task.wait()
							VirtualUser:Button1Up(Vector2.new(0,0), Workspace.CurrentCamera.CFrame)
							break
						end
					end
				end)
			end

			local function stopScript()
				if tpLoop then task.cancel(tpLoop) end
				if spamLoop then task.cancel(spamLoop) end
				tpLoop = nil
				spamLoop = nil
			end

			button.MouseButton1Click:Connect(function()
				scriptEnabled = not scriptEnabled
				uiStroke.Color = if scriptEnabled then Color3.fromRGB(0, 255, 0) else Color3.fromRGB(255, 255, 255)

				if scriptEnabled then
					startScript()
				else
					stopScript()
				end
			end)

			player.CharacterAdded:Connect(function(newChar)
				character = newChar
				humanoid = newChar:WaitForChild("Humanoid")
				rootPart = newChar:WaitForChild("HumanoidRootPart")
				if scriptEnabled then
					stopScript()
					startScript()
				end
			end)
		end
		coroutine.wrap(NCIJQSE_fake_script)()
		local function LKHCWI_fake_script() -- EspFrame.LocalScript 
			local script = Instance.new('LocalScript', EspFrame)

			local Players = game:GetService("Players")
			local LocalPlayer = Players.LocalPlayer
			local RunService = game:GetService("RunService")
			local Workspace = game:GetService("Workspace")
			local wantedList = workspace.Map.Buildings.Police.Board.PartGui.Gui.List

			local buttonNames = {
				"ItemEsp",
				"HighLightPlayer",
				"HighlightCops",
				"NameEsp",
				"HealthEsp",
				"RobberyEsp",
				"Tracers",
				"BountyName"
			}

			local buttons = {}
			local espToggles = {}

			local highlights = {}
			local healthTags = {}
			local nameTags = {}
			local bountyTags = {}

			local DISTANCE_BOOST_START = 100

			for _, name in ipairs(buttonNames) do
				espToggles[name] = false
				highlights[name] = {}
			end

			local function getPlayerDistance(player)
				local char = LocalPlayer.Character
				local hrp = char and char:FindFirstChild("HumanoidRootPart")
				local targetHrp = player.Character and player.Character:FindFirstChild("HumanoidRootPart")

				if hrp and targetHrp then
					return (hrp.Position - targetHrp.Position).Magnitude
				end

				return 0
			end

			local function getDistanceScale(dist)
				if dist < DISTANCE_BOOST_START then
					return 1
				end

				return 1 + math.min((dist - DISTANCE_BOOST_START) / 100, 1) * 0.75
			end

			local function getHealthColor(ratio)
				ratio = math.clamp(ratio, 0, 1)

				if ratio > 0.5 then
					return Color3.fromRGB(255, 210, 50):Lerp(
						Color3.fromRGB(70, 255, 110),
						(ratio - 0.5) / 0.5
					)
				end

				return Color3.fromRGB(255, 50, 50):Lerp(
					Color3.fromRGB(255, 210, 50),
					ratio / 0.5
				)
			end

			local function setupButton(name)
				local button = script.Parent:FindFirstChild(name)

				if button then
					buttons[name] = button

					local oldStroke = button:FindFirstChild("UIStroke")

					if oldStroke then
						oldStroke:Destroy()
					end

					local uiStroke = Instance.new("UIStroke")
					uiStroke.Parent = button
					uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
					uiStroke.Transparency = 0
					uiStroke.Thickness = 0.6
					uiStroke.Color = Color3.fromRGB(255,255,255)

					button.MouseButton1Click:Connect(function()
						espToggles[name] = not espToggles[name]

						if espToggles[name] then
							uiStroke.Color = Color3.fromRGB(0,255,0)
						else
							uiStroke.Color = Color3.fromRGB(255,255,255)
						end
					end)
				end
			end

			local function parseBounty(text)
				local cleaned = text:gsub("[%$,]", "")
				return tonumber(cleaned) or 0
			end

			local function clearBountyTags()
				for _, tag in pairs(bountyTags) do
					if tag and tag.Parent then
						tag:Destroy()
					end
				end

				bountyTags = {}
			end

			local function clearHighlights(espType)
				if highlights[espType] then
					for _, obj in ipairs(highlights[espType]) do
						if obj and obj.Parent then
							obj:Destroy()
						end
					end

					highlights[espType] = {}
				end
			end

			local function clearNameTags()
				for player, tag in pairs(nameTags) do
					if tag and tag.Parent then
						tag:Destroy()
					end
				end
				nameTags = {}
			end

			local function clearHealthTags()
				for player, tag in pairs(healthTags) do
					if tag and tag.Parent then
						tag:Destroy()
					end
				end
				healthTags = {}
			end

			local function isCop(player)
				local backpack = player:FindFirstChild("Backpack")

				if backpack and backpack:FindFirstChild("Handcuffs") then
					return true
				end

				local char = player.Character

				if char and char:FindFirstChild("Handcuffs") then
					return true
				end

				return false
			end

			local function findPlayerByBoardName(name)
				local lower = name:lower()

				for _, plr in ipairs(Players:GetPlayers()) do
					if plr.Name:lower() == lower then
						return plr
					end

					if plr.DisplayName:lower() == lower then
						return plr
					end
				end

				return nil
			end

			local function getWantedPlayers()
				local wantedPlayers = {}
				local added = {}

				for _, sample in ipairs(wantedList:GetChildren()) do
					if not sample:IsA("Frame") then
						continue
					end

					if sample.Name ~= "Sample" then
						continue
					end

					local displayName = sample:FindFirstChild("Displayname")
					local bounty = sample:FindFirstChild("Bounty")

					if not displayName or not bounty then
						continue
					end

					local name = displayName.Text

					if name == "" then
						continue
					end

					local bountyVal = parseBounty(bounty.Text)

					if bountyVal == 100 then
						continue
					end

					if bountyVal <= 0 then
						continue
					end

					local plr = findPlayerByBoardName(name)

					if not plr then
						continue
					end

					if plr == LocalPlayer then
						continue
					end

					if added[plr] then
						continue
					end

					if not plr.Character then
						continue
					end

					if not plr.Character:FindFirstChild("HumanoidRootPart") then
						continue
					end

					added[plr] = true

					table.insert(wantedPlayers, {
						Player = plr,
						Bounty = bountyVal
					})
				end

				return wantedPlayers
			end

			local function updateBountyName()
				clearBountyTags()

				if not espToggles.BountyName then
					return
				end

				for _, data in ipairs(getWantedPlayers()) do
					local player = data.Player
					local bounty = data.Bounty

					local head = player.Character and player.Character:FindFirstChild("Head")

					if head then
						local tag = Instance.new("BillboardGui")
						tag.Name = "BountyTag"
						tag.Adornee = head
						tag.Size = UDim2.new(0, 150, 0, 35)
						tag.StudsOffset = Vector3.new(0, 5, 0)
						tag.AlwaysOnTop = true
						tag.MaxDistance = 500
						tag.Parent = head

						local text = Instance.new("TextLabel")
						text.Size = UDim2.new(1, 0, 1, 0)
						text.BackgroundTransparency = 1
						text.Font = Enum.Font.GothamBold
						text.TextScaled = true
						text.TextStrokeTransparency = 0.5
						text.TextColor3 = Color3.fromRGB(255, 170, 0)
						text.Text = player.DisplayName .. "\n$" .. bounty
						text.Parent = tag

						bountyTags[player] = tag
					end
				end
			end

			local function updateHighlightCops()
				clearHighlights("HighlightCops")

				if not espToggles.HighlightCops then
					return
				end

				for _, player in ipairs(Players:GetPlayers()) do
					if player ~= LocalPlayer and player.Character and isCop(player) then
						local highlight = Instance.new("Highlight")
						highlight.Name = "CopHighlight"
						highlight.FillColor = Color3.fromRGB(0, 100, 255)
						highlight.OutlineColor = Color3.fromRGB(0, 170, 255)
						highlight.FillTransparency = 0.5
						highlight.OutlineTransparency = 0

						highlight.Parent = player.Character

						table.insert(highlights.HighlightCops, highlight)
					end
				end
			end

			local function createHighlight(obj, color, espType)
				local highlight = Instance.new("Highlight")

				highlight.Name = "ESP_" .. espType
				highlight.FillColor = color
				highlight.OutlineColor = color
				highlight.FillTransparency = 0.45
				highlight.OutlineTransparency = 0
				highlight.DepthMode = Enum.HighlightDepthMode.AlwaysOnTop
				highlight.Adornee = obj
				highlight.Parent = obj

				table.insert(highlights[espType], highlight)

				return highlight
			end

			local function updateHighlightPlayer()
				clearHighlights("HighLightPlayer")

				if not espToggles.HighLightPlayer then
					return
				end

				for _, player in ipairs(Players:GetPlayers()) do
					if player ~= LocalPlayer
						and player.Character
						and not (espToggles.HighlightCops and isCop(player)) then
						local team = player.Team
						local teamColor = team and team.TeamColor

						local highlight = Instance.new("Highlight")
						highlight.Name = "PlayerHighlight"
						highlight.Parent = player.Character

						if teamColor then
							highlight.FillColor = Color3.fromRGB(255,255,255)
							highlight.OutlineColor = Color3.fromRGB(255,255,255)
							highlight.FillTransparency = 0.7
							highlight.OutlineTransparency = 0.25
						end

						table.insert(highlights.HighLightPlayer, highlight)
					end
				end
			end

			local function updateNameEsp()
				clearNameTags()

				if not espToggles.NameEsp then
					return
				end

				for _, player in ipairs(Players:GetPlayers()) do
					if player ~= LocalPlayer then
						local char = player.Character
						local head = char and char:FindFirstChild("Head")

						if head then
							local dist = getPlayerDistance(player)
							local scale = getDistanceScale(dist)

							local tag = Instance.new("BillboardGui")
							tag.Name = "NameTag_" .. player.Name
							tag.Adornee = head
							tag.Size = UDim2.new(0, math.floor(120 * scale), 0, math.floor(22 * scale))
							tag.StudsOffset = Vector3.new(0, 3.8, 0)
							tag.AlwaysOnTop = true
							tag.MaxDistance = 500
							tag.Parent = head

							local textLabel = Instance.new("TextLabel")
							textLabel.Name = "Name"
							textLabel.Size = UDim2.new(1, 0, 1, 0)
							textLabel.BackgroundTransparency = 1
							textLabel.Text = player.Name
							textLabel.Font = Enum.Font.GothamBold
							textLabel.TextColor3 = player.TeamColor.Color
							textLabel.TextSize = math.floor(14 * scale)
							textLabel.TextStrokeTransparency = 0.5
							textLabel.Parent = tag

							nameTags[player] = tag
						end
					end
				end
			end

			local function updateHealthEsp()
				clearHealthTags()

				if not espToggles.HealthEsp then
					return
				end

				for _, player in ipairs(Players:GetPlayers()) do
					if player ~= LocalPlayer then
						local char = player.Character
						local hum = char and char:FindFirstChildOfClass("Humanoid")
						local head = char and char:FindFirstChild("Head")

						if hum and head then
							local dist = getPlayerDistance(player)
							local scale = getDistanceScale(dist)

							local ratio = hum.MaxHealth > 0 and hum.Health / hum.MaxHealth or 0
							local color = getHealthColor(ratio)

							local tag = Instance.new("BillboardGui")
							tag.Name = "HealthTag_" .. player.Name
							tag.Adornee = head
							tag.Size = UDim2.new(0, math.floor(90 * scale), 0, math.floor(20 * scale))
							tag.StudsOffset = Vector3.new(0, 2.1, 0)
							tag.AlwaysOnTop = true
							tag.MaxDistance = 400
							tag.Parent = head

							local barBack = Instance.new("Frame")
							barBack.Name = "BarBack"
							barBack.Size = UDim2.new(1, 0, 0, 7)
							barBack.BackgroundColor3 = Color3.fromRGB(25, 25, 25)
							barBack.BorderSizePixel = 0
							barBack.Parent = tag

							local corner = Instance.new("UICorner")
							corner.CornerRadius = UDim.new(0, 3)
							corner.Parent = barBack

							local barFill = Instance.new("Frame")
							barFill.Name = "BarFill"
							barFill.Size = UDim2.new(math.clamp(ratio, 0, 1), 0, 1, 0)
							barFill.BackgroundColor3 = color
							barFill.BorderSizePixel = 0
							barFill.Parent = barBack

							local fillCorner = Instance.new("UICorner")
							fillCorner.CornerRadius = UDim.new(0, 3)
							fillCorner.Parent = barFill

							local hpText = Instance.new("TextLabel")
							hpText.Name = "HpText"
							hpText.Size = UDim2.new(1, 0, 0, 10)
							hpText.Position = UDim2.new(0, 0, 0, 9)
							hpText.BackgroundTransparency = 1
							hpText.Font = Enum.Font.GothamMedium
							hpText.TextSize = math.floor(10 * scale)
							hpText.TextColor3 = Color3.fromRGB(220, 220, 220)
							hpText.TextStrokeTransparency = 0.5

							if hum.Health <= 0 then
								hpText.Text = "DEAD"
								hpText.TextColor3 = Color3.fromRGB(255, 80, 80)
							else
								hpText.Text = math.floor(hum.Health) .. " / " .. math.floor(hum.MaxHealth)
							end

							hpText.Parent = tag

							healthTags[player] = tag
						end
					end
				end
			end

			local function updateRobberyESP()
				clearHighlights("RobberyEsp")

				if not espToggles.RobberyEsp then
					return
				end

				local map = Workspace:FindFirstChild("Map")

				if not map then
					return
				end

				local cashiers = map:FindFirstChild("Cashiers")

				if cashiers then
					for _, cashier in ipairs(cashiers:GetChildren()) do
						if cashier:IsA("Model") then
							local opened = cashier:FindFirstChild("Opened", true)
							local color = Color3.fromRGB(0, 255, 0)

							if opened and opened:IsA("BasePart") then
								if opened.Transparency == 0 then
									color = Color3.fromRGB(255, 0, 0)
								end
							end

							createHighlight(cashier, color, "RobberyEsp")
						end
					end
				end

				local atms = map:FindFirstChild("ATMs")

				if atms then
					for _, atm in ipairs(atms:GetChildren()) do
						if atm:IsA("Model") then
							local screen = atm:FindFirstChild("Screen", true)
							local color = Color3.fromRGB(255, 0, 0)

							if screen and screen:IsA("BasePart") then
								local screenColor = screen.Color
								local targetColor = Color3.fromRGB(113, 118, 165)

								if math.abs(screenColor.R - targetColor.R) < 0.01
									and math.abs(screenColor.G - targetColor.G) < 0.01
									and math.abs(screenColor.B - targetColor.B) < 0.01 then

									color = Color3.fromRGB(0, 255, 0)
								end
							end

							createHighlight(atm, color, "RobberyEsp")
						end
					end
				end
			end

			local function updateItemESP()
				clearHighlights("ItemEsp")

				if not espToggles.ItemEsp then
					return
				end

				local pickupItems = Workspace:FindFirstChild("PickUpItems")

				if pickupItems then
					for _, obj in ipairs(pickupItems:GetChildren()) do
						if obj:IsA("Model") then
							createHighlight(obj, Color3.fromRGB(0, 255, 0), "ItemEsp")
						elseif obj:IsA("BasePart") and obj.CanCollide then
							createHighlight(obj, Color3.fromRGB(0, 255, 0), "ItemEsp")
						end
					end
				end

				local bench = Workspace:FindFirstChild("Bench")

				if bench then
					for _, obj in ipairs(bench:GetChildren()) do
						if obj:IsA("Model") then
							createHighlight(obj, Color3.fromRGB(0, 255, 0), "ItemEsp")
						elseif obj:IsA("BasePart") and obj.CanCollide then
							createHighlight(obj, Color3.fromRGB(0, 255, 0), "ItemEsp")
						end
					end
				end
			end

			local function updateTracers()
				clearHighlights("Tracers")

				if not espToggles.Tracers then
					return
				end

				if not LocalPlayer.Character or not LocalPlayer.Character:FindFirstChild("HumanoidRootPart") then
					return
				end

				local origin = LocalPlayer.Character.HumanoidRootPart:FindFirstChild("TracerOrigin")

				if not origin then
					origin = Instance.new("Attachment")
					origin.Name = "TracerOrigin"
					origin.Parent = LocalPlayer.Character.HumanoidRootPart
				end

				table.insert(highlights.Tracers, origin)

				for _, player in ipairs(Players:GetPlayers()) do
					if player ~= LocalPlayer
						and player.Character
						and player.Character:FindFirstChild("HumanoidRootPart") then

						local targetAttach = Instance.new("Attachment")
						targetAttach.Name = "TracerTarget"
						targetAttach.Parent = player.Character.HumanoidRootPart

						local beam = Instance.new("Beam")
						beam.Name = "TracerBeam"
						beam.FaceCamera = true
						beam.Color = ColorSequence.new(Color3.fromRGB(0, 255, 255))
						beam.Width0 = 0.6
						beam.Width1 = 0.6
						beam.Transparency = NumberSequence.new(0.5)

						beam.Attachment0 = origin
						beam.Attachment1 = targetAttach
						beam.Parent = Workspace

						table.insert(highlights.Tracers, beam)
						table.insert(highlights.Tracers, targetAttach)
					end
				end
			end

			for _, name in ipairs(buttonNames) do
				setupButton(name)
			end

			local lastUpdate = 0

			RunService.Heartbeat:Connect(function()
				local currentTime = tick()

				if currentTime - lastUpdate >= 0.25 then
					updateHighlightCops()
					updateHighlightPlayer()
					updateNameEsp()
					updateHealthEsp()
					updateRobberyESP()
					updateItemESP()
					updateTracers()
					updateBountyName()

					lastUpdate = currentTime
				end
			end)

			Players.PlayerRemoving:Connect(function(player)
				if nameTags[player] then
					nameTags[player]:Destroy()
					nameTags[player] = nil
				end

				if bountyTags[player] then
					bountyTags[player]:Destroy()
					bountyTags[player] = nil
				end

				if healthTags[player] then
					healthTags[player]:Destroy()
					healthTags[player] = nil
				end
			end)
		end
		coroutine.wrap(LKHCWI_fake_script)()
		local function BKZI_fake_script() -- MiscFrame.FlyScript 
			local script = Instance.new('LocalScript', MiscFrame)

			local Players = game:GetService("Players")
			local UserInputService = game:GetService("UserInputService")
			local RunService = game:GetService("RunService")

			local LocalPlayer = Players.LocalPlayer
			local Camera = workspace.CurrentCamera

			local frame = script.Parent
			local flyButton = frame:WaitForChild("Fly")
			local flySpeedBox = flyButton:WaitForChild("FlySpeedBox")

			local oldStroke = flyButton:FindFirstChild("UIStroke")

			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = flyButton
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255,255,255)

			local SPEED = 50
			local ACCEL = 12
			local TURN_SPEED = 14
			local Flying = false
			local Keys = {
				W = false,
				A = false,
				S = false,
				D = false,
				Space = false,
				Control = false
			}

			local FlyConnection
			local FlyPhysicsConnection
			local CurrentVel = Vector3.zero
			local CurrentYaw = 0
			local HoldY = nil

			local Humanoid
			local HRP

			local MobileUp = false
			local MobileDown = false
			local MobileGui = nil

			local BLOCKED_STATES = {
				Enum.HumanoidStateType.FallingDown,
				Enum.HumanoidStateType.Freefall,
				Enum.HumanoidStateType.Ragdoll,
				Enum.HumanoidStateType.Physics,
			}

			local function inputAllowed()
				if _G.keybindsBlocked then
					return false
				end

				return UserInputService:GetFocusedTextBox() == nil
			end

			local function getSpeed()
				local v = tonumber(flySpeedBox.Text)

				if v and v > 0 then
					return v
				end

				return 50
			end

			local function clearKeys()
				Keys.W = false
				Keys.A = false
				Keys.S = false
				Keys.D = false
				Keys.Space = false
				Keys.Control = false
			end

			local function getMoveVector()
				local cam = Camera.CFrame
				local move = Vector3.zero

				if Keys.W then
					move = move + cam.LookVector
				end

				if Keys.S then
					move = move - cam.LookVector
				end

				if Keys.A then
					move = move - cam.RightVector
				end

				if Keys.D then
					move = move + cam.RightVector
				end

				if Keys.Space then
					move = move + Vector3.new(0, 1, 0)
				end

				if Keys.Control then
					move = move - Vector3.new(0, 1, 0)
				end

				if move.Magnitude > 0 then
					return move.Unit
				end

				return Vector3.zero
			end

			local function getMobileMoveVector()
				if not Humanoid then
					return Vector3.zero
				end

				local moveDir = Humanoid.MoveDirection

				if moveDir.Magnitude < 0.01 then
					return Vector3.zero
				end

				local camCF = Camera.CFrame
				local camLook = camCF.LookVector
				local camRight = camCF.RightVector

				local flatLook = Vector3.new(camLook.X, 0, camLook.Z)
				local flatRight = Vector3.new(camRight.X, 0, camRight.Z)

				if flatLook.Magnitude > 0.01 then
					flatLook = flatLook.Unit
				else
					flatLook = Vector3.new(0, 0, -1)
				end

				if flatRight.Magnitude > 0.01 then
					flatRight = flatRight.Unit
				else
					flatRight = Vector3.new(1, 0, 0)
				end

				local result = (flatLook * moveDir.Z) + (flatRight * moveDir.X)

				if MobileUp then
					result = result + Vector3.new(0, 1, 0)
				end

				if MobileDown then
					result = result - Vector3.new(0, 1, 0)
				end

				if result.Magnitude > 0.01 then
					return result.Unit
				end

				return Vector3.zero
			end

			local function getTotalMoveVector()
				if UserInputService.TouchEnabled then
					local mobileMove = getMobileMoveVector()
					if mobileMove.Magnitude > 0.01 then
						return mobileMove
					end
				end

				return getMoveVector()
			end

			local function getFlyPart()
				local seat = Humanoid and Humanoid.SeatPart

				if seat and (seat:IsA("VehicleSeat") or seat:IsA("Seat")) then
					local model = seat:FindFirstAncestorOfClass("Model")
					return model and model.PrimaryPart or seat
				end

				return HRP
			end

			local function applyVelocity(vel)
				local part = getFlyPart()

				if not part then
					return
				end

				part.AssemblyLinearVelocity = vel
				part.AssemblyAngularVelocity = Vector3.zero
			end

			local function lockHeight(y)
				if not HRP then
					return
				end

				local rot = HRP.CFrame - HRP.CFrame.Position

				HRP.CFrame = CFrame.new(HRP.Position.X, y, HRP.Position.Z) * rot

				applyVelocity(Vector3.zero)
			end

			local function setFallStates(enabled)
				if not Humanoid then
					return
				end

				for _, state in ipairs(BLOCKED_STATES) do
					Humanoid:SetStateEnabled(state, enabled)
				end
			end

			local function stopFlyLoop()
				if FlyConnection then
					FlyConnection:Disconnect()
					FlyConnection = nil
				end

				if FlyPhysicsConnection then
					FlyPhysicsConnection:Disconnect()
					FlyPhysicsConnection = nil
				end
			end

			local function resetFly()
				Flying = false

				stopFlyLoop()

				clearKeys()

				MobileUp = false
				MobileDown = false

				CurrentVel = Vector3.zero
				HoldY = nil

				if Humanoid and Humanoid.Parent then
					Humanoid.PlatformStand = false
					Humanoid.AutoRotate = true

					setFallStates(true)

					Humanoid:ChangeState(Enum.HumanoidStateType.Freefall)
				end

				if HRP and HRP.Parent then
					applyVelocity(Vector3.zero)
				end
			end

			local function startFly()
				if Flying or not HRP or not Humanoid then
					return
				end

				Flying = true
				HoldY = nil
				SPEED = getSpeed()
				CurrentVel = Vector3.zero

				CurrentYaw =
					math.atan2(
						-HRP.CFrame.LookVector.X,
						-HRP.CFrame.LookVector.Z
					)

				Humanoid.PlatformStand = true
				Humanoid.AutoRotate = false

				setFallStates(false)

				local function flyStep(dt)
					if not Flying or not HRP or not Humanoid then
						return
					end

					local move = getTotalMoveVector()

					local alpha = math.clamp(ACCEL * dt, 0, 1)

					if move.Magnitude > 0.01 then
						HoldY = nil

						local targetVel = move * SPEED

						CurrentVel = CurrentVel:Lerp(targetVel, alpha)

						applyVelocity(CurrentVel)

						local flatMove = Vector3.new(move.X, 0, move.Z)

						if flatMove.Magnitude > 0.1 then
							flatMove = flatMove.Unit

							local targetYaw =
								math.atan2(
									-flatMove.X,
									-flatMove.Z
								)

							local diff =
								math.atan2(
									math.sin(targetYaw - CurrentYaw),
									math.cos(targetYaw - CurrentYaw)
								)

							CurrentYaw =
								CurrentYaw +
								(diff * math.clamp(TURN_SPEED * dt, 0, 1))

							HRP.CFrame =
								CFrame.new(HRP.Position) *
								CFrame.Angles(0, CurrentYaw, 0)
						end
					else
						if not HoldY then
							HoldY = HRP.Position.Y
						end

						CurrentVel = Vector3.zero

						lockHeight(HoldY)
					end
				end

				FlyConnection = RunService.RenderStepped:Connect(flyStep)

				FlyPhysicsConnection = RunService.PostSimulation:Connect(function()
					if not Flying then
						return
					end

					if getTotalMoveVector().Magnitude > 0.01 then
						applyVelocity(CurrentVel)
					elseif HoldY then
						lockHeight(HoldY)
					end
				end)
			end

			local function toggleFly()
				SPEED = getSpeed()

				if Flying then
					resetFly()

					uiStroke.Color = Color3.fromRGB(255,255,255)
				else
					if not HRP or not Humanoid then
						return
					end

					startFly()

					uiStroke.Color = Color3.fromRGB(0,255,0)
				end
			end

			local function setKey(key, down)
				if not inputAllowed() and not Flying then
					return
				end

				Keys[key] = down
			end

			UserInputService.InputBegan:Connect(function(input, gp)
				if gp then
					return
				end

				local k = input.KeyCode

				if k == Enum.KeyCode.X then
					if inputAllowed() then
						toggleFly()
					end
				elseif k == Enum.KeyCode.W then
					setKey("W", true)
				elseif k == Enum.KeyCode.A then
					setKey("A", true)
				elseif k == Enum.KeyCode.S then
					setKey("S", true)
				elseif k == Enum.KeyCode.D then
					setKey("D", true)
				elseif k == Enum.KeyCode.Space then
					setKey("Space", true)
				elseif k == Enum.KeyCode.LeftControl then
					setKey("Control", true)
				end
			end)

			UserInputService.InputEnded:Connect(function(input, gp)
				if gp then
					return
				end

				local k = input.KeyCode

				if k == Enum.KeyCode.W then
					setKey("W", false)
				elseif k == Enum.KeyCode.A then
					setKey("A", false)
				elseif k == Enum.KeyCode.S then
					setKey("S", false)
				elseif k == Enum.KeyCode.D then
					setKey("D", false)
				elseif k == Enum.KeyCode.Space then
					setKey("Space", false)
				elseif k == Enum.KeyCode.LeftControl then
					setKey("Control", false)
				end
			end)

			flyButton.MouseButton1Click:Connect(function()
				toggleFly()
			end)

			local function onCharacter(char)
				resetFly()

				Humanoid = char:WaitForChild("Humanoid")
				HRP = char:WaitForChild("HumanoidRootPart")

				uiStroke.Color = Color3.fromRGB(255,255,255)
			end

			if LocalPlayer.Character then
				onCharacter(LocalPlayer.Character)
			end

			LocalPlayer.CharacterAdded:Connect(onCharacter)

			if UserInputService.TouchEnabled then
				local playerGui = LocalPlayer:WaitForChild("PlayerGui")

				local function createMobileButtons()
					local screenGui = Instance.new("ScreenGui")
					screenGui.Name = "FlyMobileControls"
					screenGui.Parent = playerGui
					screenGui.Enabled = false

					local upButton = Instance.new("TextButton")
					upButton.Name = "FlyUpButton"
					upButton.Size = UDim2.new(0, 60, 0, 60)
					upButton.Position = UDim2.new(0, 30, 0.5, -80)
					upButton.BackgroundColor3 = Color3.fromRGB(40, 40, 40)
					upButton.BackgroundTransparency = 0.3
					upButton.Text = "↑"
					upButton.TextColor3 = Color3.fromRGB(255, 255, 255)
					upButton.TextSize = 28
					upButton.Font = Enum.Font.GothamBold
					upButton.Parent = screenGui

					local upCorner = Instance.new("UICorner")
					upCorner.CornerRadius = UDim.new(0, 12)
					upCorner.Parent = upButton

					local downButton = Instance.new("TextButton")
					downButton.Name = "FlyDownButton"
					downButton.Size = UDim2.new(0, 60, 0, 60)
					downButton.Position = UDim2.new(0, 30, 0.5, 10)
					downButton.BackgroundColor3 = Color3.fromRGB(40, 40, 40)
					downButton.BackgroundTransparency = 0.3
					downButton.Text = "↓"
					downButton.TextColor3 = Color3.fromRGB(255, 255, 255)
					downButton.TextSize = 28
					downButton.Font = Enum.Font.GothamBold
					downButton.Parent = screenGui

					local downCorner = Instance.new("UICorner")
					downCorner.CornerRadius = UDim.new(0, 12)
					downCorner.Parent = downButton

					upButton.InputBegan:Connect(function(input)
						if input.UserInputType == Enum.UserInputType.Touch then
							MobileUp = true
						end
					end)

					upButton.InputEnded:Connect(function(input)
						if input.UserInputType == Enum.UserInputType.Touch then
							MobileUp = false
						end
					end)

					downButton.InputBegan:Connect(function(input)
						if input.UserInputType == Enum.UserInputType.Touch then
							MobileDown = true
						end
					end)

					downButton.InputEnded:Connect(function(input)
						if input.UserInputType == Enum.UserInputType.Touch then
							MobileDown = false
						end
					end)

					return screenGui
				end

				local function updateMobileGuiVisibility()
					if MobileGui then
						MobileGui.Enabled = Flying
					end
				end

				spawn(function()
					wait(1)

					MobileGui = createMobileButtons()
				end)

				LocalPlayer.CharacterAdded:Connect(function()
					if MobileGui then
						MobileGui:Destroy()
					end

					spawn(function()
						wait(1)

						MobileGui = createMobileButtons()
						updateMobileGuiVisibility()
					end)
				end)

				local originalToggleFly = toggleFly

				toggleFly = function()
					originalToggleFly()
					updateMobileGuiVisibility()
				end
			end
		end
		coroutine.wrap(BKZI_fake_script)()
		local function BQUUT_fake_script() -- MiscFrame.SpeedScript 
			local script = Instance.new('LocalScript', MiscFrame)

			local Players = game:GetService("Players")
			local RunService = game:GetService("RunService")
			local UserInputService = game:GetService("UserInputService")

			local LocalPlayer = Players.LocalPlayer
			local frame = script.Parent

			local speedButton = frame:WaitForChild("Speed")
			local speedBox = speedButton:WaitForChild("SpeedBox")

			local oldStroke = speedButton:FindFirstChild("UIStroke")

			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = speedButton
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255,255,255)

			local defaultSpeed = 50
			local speedEnabled = false
			local connection

			local function startMoving(character, speed)
				local HRP = character:WaitForChild("HumanoidRootPart")

				connection = RunService.RenderStepped:Connect(function(dt)
					local moveDir = character.Humanoid.MoveDirection

					if moveDir.Magnitude > 0 then
						HRP.CFrame =
							HRP.CFrame +
							moveDir.Unit * speed * dt
					end
				end)
			end

			local function stopMoving()
				if connection then
					connection:Disconnect()
					connection = nil
				end
			end

			local function toggleSpeed()
				local num = tonumber(speedBox.Text)

				local targetSpeed = num or defaultSpeed

				speedEnabled = not speedEnabled

				local character = LocalPlayer.Character

				if character
					and character:FindFirstChild("Humanoid")
					and character:FindFirstChild("HumanoidRootPart") then

					if speedEnabled then
						uiStroke.Color = Color3.fromRGB(0,255,0)

						startMoving(character, targetSpeed)
					else
						uiStroke.Color = Color3.fromRGB(255,255,255)

						stopMoving()
					end
				end
			end

			speedButton.MouseButton1Click:Connect(toggleSpeed)

			UserInputService.InputBegan:Connect(function(input, gp)
				if gp then
					return
				end

				if _G.keybindsBlocked then
					return
				end

				if input.KeyCode == Enum.KeyCode.Z then
					toggleSpeed()
				end
			end)

			LocalPlayer.CharacterAdded:Connect(function()
				stopMoving()

				speedEnabled = false

				uiStroke.Color = Color3.fromRGB(255,255,255)
			end)
		end
		coroutine.wrap(BQUUT_fake_script)()
		local function OGUU_fake_script() -- Noclip.LocalScript 
			local script = Instance.new('LocalScript', Noclip)

			local Players = game:GetService("Players")
			local RunService = game:GetService("RunService")
			local UserInputService = game:GetService("UserInputService")

			local LocalPlayer = Players.LocalPlayer
			local button = script.Parent

			local oldStroke = button:FindFirstChild("UIStroke")

			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255,255,255)

			local noclip = false
			local connection
			local modifiedParts = {}
			local charStates = {}
			local bodyParts = {}
			local protected = {}
			local doneModels = {}

			local overlapParams = OverlapParams.new()
			overlapParams.FilterType = Enum.RaycastFilterType.Blacklist

			local rayParams = RaycastParams.new()
			rayParams.FilterType = Enum.RaycastFilterType.Blacklist

			local FEET_TOLERANCE = 0.5

			local FLOOR_NAMES = {
				"floor", "ground", "baseplate", "road", "path",
				"sidewalk", "pavement", "walkway", "tile", "concrete",
			}

			local function isFloorName(part)
				local name = part.Name:lower()
				for _, key in ipairs(FLOOR_NAMES) do
					if name:find(key) then
						return true
					end
				end
				return false
			end

			local function refreshBody(char)
				table.clear(bodyParts)
				local hrp = char:FindFirstChild("HumanoidRootPart")
				if hrp then bodyParts[1] = hrp end
				local torso = char:FindFirstChild("UpperTorso") or char:FindFirstChild("Torso")
				if torso then bodyParts[#bodyParts + 1] = torso end
				local head = char:FindFirstChild("Head")
				if head then bodyParts[#bodyParts + 1] = head end
			end

			local function buildProtected(char, hrp, hum)
				table.clear(protected)
				if not hrp then return end

				local feetY = hrp.Position.Y - hrp.Size.Y * 0.5 - (hum and hum.HipHeight or 2)
				local hrpPos = hrp.Position

				rayParams.FilterDescendantsInstances = { char }
				local hits = {
					workspace:Raycast(hrpPos, Vector3.new(0, -8, 0), rayParams),
					workspace:Spherecast(hrpPos, 1, Vector3.new(0, -8, 0), rayParams),
					workspace:Raycast(hrpPos + hrp.CFrame.RightVector * 1.5, Vector3.new(0, -8, 0), rayParams),
					workspace:Raycast(hrpPos - hrp.CFrame.RightVector * 1.5, Vector3.new(0, -8, 0), rayParams),
				}

				for _, hit in ipairs(hits) do
					if hit and hit.Instance and hit.Instance:IsA("BasePart") and hit.Normal.Y > 0.5 then
						protected[hit.Instance] = true
					end
				end

				for _, inst in ipairs(workspace:GetPartBoundsInRadius(hrpPos, 6, overlapParams)) do
					if inst:IsA("BasePart") and not inst:IsDescendantOf(char) then
						if inst:IsA("Terrain") or isFloorName(inst) then
							local topY = (inst.CFrame * CFrame.new(0, inst.Size.Y * 0.5, 0)).Position.Y
							if math.abs(topY - feetY) <= FEET_TOLERANCE + 0.3 then
								local localPos = inst.CFrame:PointToObjectSpace(hrpPos)
								local half = inst.Size * 0.5
								if math.abs(localPos.X) <= half.X + 2 and math.abs(localPos.Z) <= half.Z + 2 then
									protected[inst] = true
								end
							end
						end
					end
				end
			end

			local function isProtected(part)
				return protected[part] == true
			end

			local function rememberAndDisable(part)
				if not part:IsA("BasePart") or isProtected(part) then
					return
				end
				if modifiedParts[part] == nil then
					modifiedParts[part] = part.CanCollide
				end
				part.CanCollide = false
			end

			local function disableModel(part, char)
				local model = part:FindFirstAncestorOfClass("Model")
				if not model or model == workspace or model == char or doneModels[model] then
					return
				end
				doneModels[model] = true
				for _, p in ipairs(model:GetDescendants()) do
					if p:IsA("BasePart") and not p:IsDescendantOf(char) then
						rememberAndDisable(p)
					end
				end
			end

			local function markPart(part, char)
				if not part:IsA("BasePart") or part:IsDescendantOf(char) or isProtected(part) then
					return
				end
				rememberAndDisable(part)
				disableModel(part, char)
			end

			local function setCharNoclip(char, enabled)
				for _, p in ipairs(char:GetDescendants()) do
					if p:IsA("BasePart") then
						if enabled then
							if charStates[p] == nil then
								charStates[p] = p.CanCollide
							end
							p.CanCollide = false
						elseif charStates[p] ~= nil then
							p.CanCollide = charStates[p]
							charStates[p] = nil
						end
					end
				end
			end

			local function restoreAll()
				if connection then
					connection:Disconnect()
					connection = nil
				end

				local char = LocalPlayer.Character
				if char then
					setCharNoclip(char, false)
				end

				for part, original in pairs(modifiedParts) do
					if part and part.Parent then
						part.CanCollide = original
					end
				end
				table.clear(modifiedParts)
				table.clear(charStates)
				table.clear(doneModels)
			end

			local function updateNoclip()
				local char = LocalPlayer.Character
				if not char then return end

				local hrp = char:FindFirstChild("HumanoidRootPart")
				local hum = char:FindFirstChildOfClass("Humanoid")
				if not hrp then return end

				if #bodyParts == 0 then
					refreshBody(char)
				end

				overlapParams.FilterDescendantsInstances = { char }
				buildProtected(char, hrp, hum)
				table.clear(doneModels)

				setCharNoclip(char, true)

				for i = 1, #bodyParts do
					local bp = bodyParts[i]
					for _, p in ipairs(workspace:GetPartsInPart(bp, overlapParams)) do
						markPart(p, char)
					end
					local ok, touches = pcall(bp.GetTouchingParts, bp)
					if ok then
						for j = 1, #touches do
							markPart(touches[j], char)
						end
					end
				end

				rayParams.FilterDescendantsInstances = { char }
				local cf = hrp.CFrame
				local dirs = {
					cf.LookVector, -cf.LookVector, cf.RightVector, -cf.RightVector,
					Vector3.yAxis, -Vector3.yAxis,
				}
				local move = hum and hum.MoveDirection
				if move and move.Magnitude > 0.05 then
					dirs[1] = move.Unit
				end
				local pos = hrp.Position
				for i = 1, #dirs do
					local hit = workspace:Raycast(pos, dirs[i] * 9, rayParams)
					if hit then markPart(hit.Instance, char) end
					local sphere = workspace:Spherecast(pos, 2.5, dirs[i] * 8, rayParams)
					if sphere then markPart(sphere.Instance, char) end
				end

				for part, original in pairs(modifiedParts) do
					if part.Parent and not isProtected(part) then
						part.CanCollide = false
					end
				end
			end

			local function toggleNoclip()
				noclip = not noclip
				if noclip then
					uiStroke.Color = Color3.fromRGB(0, 255, 0)
					connection = RunService.RenderStepped:Connect(updateNoclip)
					for _ = 1, 3 do updateNoclip() end
				else
					noclip = false
					uiStroke.Color = Color3.fromRGB(255, 255, 255)
					restoreAll()
					task.defer(restoreAll)
				end
			end

			button.MouseButton1Click:Connect(toggleNoclip)

			UserInputService.InputBegan:Connect(function(input, g)
				if g then return end
				if _G.keybindsBlocked then return end
				if input.KeyCode == Enum.KeyCode.C then
					toggleNoclip()
				end
			end)

			LocalPlayer.CharacterAdded:Connect(function(char)
				restoreAll()
				table.clear(bodyParts)
				refreshBody(char)
				noclip = false
				uiStroke.Color = Color3.fromRGB(255, 255, 255)
			end)

		end
		coroutine.wrap(OGUU_fake_script)()
		local function XHKKLR_fake_script() -- PinkieSpin.LocalScript 
			local script = Instance.new('LocalScript', PinkieSpin)

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")
			local UserInputService = game:GetService("UserInputService")
			local player = Players.LocalPlayer
			local button = script.Parent
			local SpinPinkyEvent = ReplicatedStorage:WaitForChild("Event")

			local oldStroke = button:FindFirstChild("UIStroke")
			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255, 255, 255)

			if UserInputService.TouchEnabled then
				local uiScale = Instance.new("UIScale")
				uiScale.Scale = 0.8
				uiScale.Parent = button
			end

			local spamEnabled = false
			task.spawn(function()
				while task.wait(0.05) do
					if spamEnabled then
						SpinPinkyEvent:FireServer({Event = "SpinPinkyWheel"})
					end
				end
			end)

			button.MouseButton1Click:Connect(function()
				spamEnabled = not spamEnabled
				if spamEnabled then
					uiStroke.Color = Color3.fromRGB(0, 255, 0)
				else
					uiStroke.Color = Color3.fromRGB(255, 255, 255)
				end
			end)
		end
		coroutine.wrap(XHKKLR_fake_script)()
		local function SIQCD_fake_script() -- WeaponSpin.LocalScript 
			local script = Instance.new('LocalScript', WeaponSpin)

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")
			local player = Players.LocalPlayer
			local button = script.Parent
			local WeaponSpinEvent = ReplicatedStorage.Event

			local oldStroke = button:FindFirstChild("UIStroke")
			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255, 255, 255)

			local spamEnabled = false
			task.spawn(function()
				while task.wait(0.05) do
					if spamEnabled then
						WeaponSpinEvent:FireServer({Event = "SpinWeaponWheel"})
					end
				end
			end)

			button.MouseButton1Click:Connect(function()
				spamEnabled = not spamEnabled
				uiStroke.Color = if spamEnabled then Color3.fromRGB(0, 255, 0) else Color3.fromRGB(255, 255, 255)
			end)
		end
		coroutine.wrap(SIQCD_fake_script)()
		local function NHNIMDU_fake_script() -- GothSpin.LocalScript 
			local script = Instance.new('LocalScript', GothSpin)

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")
			local player = Players.LocalPlayer
			local button = script.Parent
			local WeaponSpinEvent = ReplicatedStorage.Event

			local oldStroke = button:FindFirstChild("UIStroke")
			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255, 255, 255)

			local spamEnabled = false
			task.spawn(function()
				while task.wait(0.05) do
					if spamEnabled then
						WeaponSpinEvent:FireServer({
							Event = "RequestFreeGothSpin"
						})
					end
				end
			end)

			button.MouseButton1Click:Connect(function()
				spamEnabled = not spamEnabled
				uiStroke.Color = spamEnabled and Color3.fromRGB(0, 255, 0) or Color3.fromRGB(255, 255, 255)
			end)
		end
		coroutine.wrap(NHNIMDU_fake_script)()
		local function MRFIHEA_fake_script() -- DisableKeybinds.LocalScript 
			local script = Instance.new('LocalScript', DisableKeybinds)

			local miscButton = script.Parent

			local oldStroke = miscButton:FindFirstChild("UIStroke")

			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = miscButton
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.6
			uiStroke.Color = Color3.fromRGB(255,255,255)

			_G.keybindsBlocked = false

			local function toggleBlock()
				_G.keybindsBlocked = not _G.keybindsBlocked

				if _G.keybindsBlocked then
					uiStroke.Color = Color3.fromRGB(0,255,0)
				else
					uiStroke.Color = Color3.fromRGB(255,255,255)
				end
			end

			miscButton.MouseButton1Click:Connect(toggleBlock)
		end
		coroutine.wrap(MRFIHEA_fake_script)()
		local function SCGARNZ_fake_script() -- AutoClicker.LocalScript 
			local script = Instance.new('LocalScript', AutoClicker)

			local Players = game:GetService("Players")
			local UserInputService = game:GetService("UserInputService")
			local VirtualInputManager = game:GetService("VirtualInputManager")
			local player = Players.LocalPlayer
			local button = script.Parent

			local CLICK_DELAY = 0.05

			local oldStroke = button:FindFirstChild("UIStroke")
			if oldStroke then oldStroke:Destroy() end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255, 255, 255)

			local autoclickerEnabled = false

			task.spawn(function()
				while task.wait(CLICK_DELAY) do
					if autoclickerEnabled then
						local pos = UserInputService:GetMouseLocation()
						local char = player.Character
						local equippedTool = char and char:FindFirstChildOfClass("Tool")

						VirtualInputManager:SendMouseButtonEvent(pos.X, pos.Y, 0, true, game, 0)
						task.wait()
						VirtualInputManager:SendMouseButtonEvent(pos.X, pos.Y, 0, false, game, 0)

						if equippedTool then
							equippedTool:Activate()
						end
					end
				end
			end)

			button.MouseButton1Click:Connect(function()
				autoclickerEnabled = not autoclickerEnabled
				uiStroke.Color = autoclickerEnabled and Color3.fromRGB(0, 255, 0) or Color3.fromRGB(255, 255, 255)
			end)

		end
		coroutine.wrap(SCGARNZ_fake_script)()
		local function FKDLM_fake_script() -- AntiAfk.LocalScript 
			local script = Instance.new('LocalScript', AntiAfk)

			local Players = game:GetService("Players")
			local VirtualUser = game:GetService("VirtualUser")

			local player = Players.LocalPlayer
			local button = script.Parent

			local oldStroke = button:FindFirstChild("UIStroke")

			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.6
			uiStroke.Color = Color3.fromRGB(255,255,255)

			local antiAFKEnabled = false

			player.Idled:Connect(function()
				if antiAFKEnabled then
					VirtualUser:Button2Down(
						Vector2.new(0,0),
						workspace.CurrentCamera.CFrame
					)

					task.wait(1)

					VirtualUser:Button2Up(
						Vector2.new(0,0),
						workspace.CurrentCamera.CFrame
					)
				end
			end)

			button.MouseButton1Click:Connect(function()
				antiAFKEnabled = not antiAFKEnabled

				if antiAFKEnabled then
					uiStroke.Color = Color3.fromRGB(0,255,0)
				else
					uiStroke.Color = Color3.fromRGB(255,255,255)
				end
			end)
		end
		coroutine.wrap(FKDLM_fake_script)()
		local function GOFFU_fake_script() -- NoSlow.LocalScript 
			local script = Instance.new('LocalScript', NoSlow)

			local Players = game:GetService("Players")
			local UserInputService = game:GetService("UserInputService")

			local LocalPlayer = Players.LocalPlayer
			local button = script.Parent

			local oldStroke = button:FindFirstChild("UIStroke")

			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255,255,255)

			local enabled = false

			button.MouseButton1Click:Connect(function()
				enabled = not enabled

				if enabled then
					uiStroke.Color = Color3.fromRGB(0,255,0)
				else
					uiStroke.Color = Color3.fromRGB(255,255,255)
				end
			end)

			task.spawn(function()
				while task.wait(0.01) do
					if not enabled then
						continue
					end

					local char = LocalPlayer.Character
					local humanoid = char and char:FindFirstChild("Humanoid")

					if humanoid then
						if UserInputService:IsKeyDown(Enum.KeyCode.LeftShift) then
							humanoid.WalkSpeed = 24
						else
							humanoid.WalkSpeed = 16
						end
					end
				end
			end)

			LocalPlayer.CharacterAdded:Connect(function()
				uiStroke.Color = enabled and Color3.fromRGB(0,255,0) or Color3.fromRGB(255,255,255)
			end)
		end
		coroutine.wrap(GOFFU_fake_script)()
		local function SJWT_fake_script() -- Reset.LocalScript 
			local script = Instance.new('LocalScript', Reset)

			local Players = game:GetService("Players")
			local StarterGui = game:GetService("StarterGui")
			local button = script.Parent
			local LocalPlayer = Players.LocalPlayer
			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Color = Color3.fromRGB(255, 255, 255)
			uiStroke.Thickness = 0.5
			local function notify(title, text)
				pcall(function()
					StarterGui:SetCore("SendNotification", {Title = title, Text = text, Duration = 2})
				end)
			end
			button.MouseButton1Click:Connect(function()
				uiStroke.Color = Color3.fromRGB(0, 255, 0)
				task.wait(0.25)
				local char = LocalPlayer.Character
				if char then
					local humanoid = char:FindFirstChild("Humanoid")
					if humanoid then
						humanoid.Health = 0
					end
				end
				uiStroke.Color = Color3.fromRGB(255, 255, 255)
			end)
		end
		coroutine.wrap(SJWT_fake_script)()
		local function HGSLYY_fake_script() -- CopyDiscord.LocalScript 
			local script = Instance.new('LocalScript', CopyDiscord)

			local button = script.Parent

			local oldStroke = button:FindFirstChild("UIStroke")

			if oldStroke then
				oldStroke:Destroy()
			end

			local uiStroke = Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.6
			uiStroke.Color = Color3.fromRGB(255,255,255)

			button.MouseButton1Click:Connect(function()
				if setclipboard then
					setclipboard("https://discord.gg/rm7tpnhFfb")

					uiStroke.Color = Color3.fromRGB(0,255,0)

					task.wait(0.5)

					uiStroke.Color = Color3.fromRGB(255,255,255)
				end
			end)
		end
		coroutine.wrap(HGSLYY_fake_script)()
		local function YTZOF_fake_script() -- SlayFarm.LocalScript 
			local script = Instance.new('LocalScript', SlayFarm)

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")
			local RunService = game:GetService("RunService")
			local Workspace = game:GetService("Workspace")
			local StarterGui = game:GetService("StarterGui")

			local LocalPlayer = Players.LocalPlayer
			local button = script.Parent
			local killAll1Button = button:WaitForChild("KillAll1") 

			getgenv().LoggedKeys = getgenv().LoggedKeys or {
				ATMHitKey = nil,
				StompKey = nil
			}
			getgenv().KeysLogged = getgenv().KeysLogged or false

			local function notify(title, text)
				pcall(function()
					StarterGui:SetCore("SendNotification", {
						Title = title;
						Text = text;
						Duration = 3;
					})
				end)
			end

			local function areKeysValid()
				if not getgenv().KeysLogged 
					or not getgenv().LoggedKeys.ATMHitKey 
					or not getgenv().LoggedKeys.StompKey then
					notify(" MISSING KEYS", "Run your Key Logger script first!")
					notify("INSTRUCTIONS", "1. Punch an ATM once | 2. Press E/Stomp once")
					return false
				end
				notify(" KEYS LOADED", "Using saved Hit/Stomp keys from logger")
				return true
			end

			local uiStroke = button:FindFirstChild("UIStroke") or Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255,255,255)

			local killAll1Stroke = killAll1Button:FindFirstChild("UIStroke") or Instance.new("UIStroke")
			killAll1Stroke.Parent = killAll1Button
			killAll1Stroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			killAll1Stroke.Transparency = 0 
			killAll1Stroke.Thickness = 0.5
			killAll1Stroke.Color = Color3.fromRGB(255,255,255)

			local running = false
			local killAll1Mode = false
			local lockedTarget = nil
			local lastKilledTarget = nil
			local lastHitTime = 0
			local MIN_HIT_INTERVAL = 0.03
			local healingCritical = false
			local healingPostStomp = false
			local waitingForFF = false
			local stompInProgress = false
			local lastSafePosition = Vector3.new(0, 50, 0)
			local noCollideTargets = {}
			local selectedWeapon = nil

			local function getCharacter() return LocalPlayer.Character end
			local function getHRP(char)
				if not char then return nil end
				return char:FindFirstChild("HumanoidRootPart") or char.PrimaryPart
			end
			local function hasForceField(char) return char and char:FindFirstChild("ForceField") ~= nil end
			local function hasEnabledPVPTag(targetChar)
				local hrp = getHRP(targetChar)
				if not hrp then return false end
				local pvptag = hrp:FindFirstChild("PVPTag", true)
				if pvptag and pvptag:IsA("BillboardGui") and pvptag.Enabled then
					return true
				end
				return false
			end
			local function getSafeLocation()
				local map = Workspace:FindFirstChild("Map")
				if map then local spawn = map:FindFirstChild("SpawnLocation") if spawn then return spawn.CFrame end end
				return CFrame.new(lastSafePosition)
			end
			local function updateSafePosition()
				local char = getCharacter()
				local hrp = getHRP(char)
				if not hrp then return end
				local pos = hrp.Position
				if pos.Y > -50 and math.abs(pos.X) < 1000 and math.abs(pos.Z) < 1000 then
					lastSafePosition = pos
				end
			end
			local function ensureLocalCollide()
				local char = getCharacter()
				if not char then return end
				for _, desc in ipairs(char:GetDescendants()) do
					if desc:IsA("BasePart") then
						desc.CanCollide = true
					end
				end
			end
			local function setTargetNoCollide(targetChar, enabled)
				if not targetChar then return end
				if enabled then
					noCollideTargets[targetChar] = true
					for _, desc in ipairs(targetChar:GetDescendants()) do
						if desc:IsA("BasePart") then
							desc.CanCollide = false
						end
					end
				else
					noCollideTargets[targetChar] = nil
					for _, desc in ipairs(targetChar:GetDescendants()) do
						if desc:IsA("BasePart") then
							desc.CanCollide = true
						end
					end
				end
			end
			local function clearAllNoCollide()
				for targetChar in pairs(noCollideTargets) do
					setTargetNoCollide(targetChar, false)
				end
				noCollideTargets = {}
			end

			local function equipSelectedWeapon()
				local char = getCharacter()
				if not char or not selectedWeapon then return end
				local hum = char:FindFirstChildOfClass("Humanoid")
				if not hum then return end

				if selectedWeapon.Parent == char then return end
				if selectedWeapon.Parent == LocalPlayer.Backpack then
					hum:EquipTool(selectedWeapon)
				end
			end

			local function isTargetDowned(targetChar)
				if not targetChar then return false end
				local hum = targetChar:FindFirstChildOfClass("Humanoid")
				if not hum then return false end
				if hum:GetState() == Enum.HumanoidStateType.Ragdoll or hum:GetState() == Enum.HumanoidStateType.FallingDown or hum:GetState() == Enum.HumanoidStateType.Physics then
					return true
				end
				return hum.Health <= 1
			end
			local STOMP_HEALTH = 4
			local function isTargetPlayerDead(plr)
				if not plr or not Players:GetPlayerByUserId(plr.UserId) then return true end
				local char = plr.Character
				if not char then return false end
				local hum = char:FindFirstChildOfClass("Humanoid")
				return hum and hum.Health <= 0
			end
			local function getLocalHealth()
				local hum = getCharacter() and getCharacter():FindFirstChildOfClass("Humanoid")
				return hum and hum.Health or 100
			end
			local function needsHealAfterKill()
				return killAll1Mode and getLocalHealth() < 100
			end
			local function getRandomTarget(excludePlr)
				local targets = {}
				for _, plr in ipairs(Players:GetPlayers()) do
					if plr ~= LocalPlayer and plr ~= excludePlr then
						local char = plr.Character
						if char then
							local hum = char:FindFirstChildOfClass("Humanoid")
							if hum and hum.Health > 0 and not hasEnabledPVPTag(char) then
								table.insert(targets, plr)
							end
						end
					end
				end
				return #targets > 0 and targets[math.random(1,#targets)] or nil
			end
			local function acquireTarget()
				lockedTarget = getRandomTarget(lastKilledTarget)
				if lockedTarget and lockedTarget.Character then
					notify("Target Locked", lockedTarget.Name)
					return lockedTarget.Character
				end
				lockedTarget = nil
				return nil
			end
			local function releaseTarget()
				if lockedTarget then
					lastKilledTarget = lockedTarget
					local char = lockedTarget.Character
					if char then setTargetNoCollide(char, false) end
				end
				lockedTarget = nil
			end
			local function isTargetAirborne(targetHRP)
				local char = targetHRP.Parent
				local hum = char and char:FindFirstChildOfClass("Humanoid")
				if hum and hum.FloorMaterial == Enum.Material.Air then
					return true
				end
				local raycastParams = RaycastParams.new()
				raycastParams.FilterDescendantsInstances = {char, getCharacter()}
				raycastParams.FilterType = Enum.RaycastFilterType.Exclude
				raycastParams.IgnoreWater = true
				local rayResult = Workspace:Raycast(targetHRP.Position, Vector3.new(0, -120, 0), raycastParams)
				if not rayResult then return true end
				return targetHRP.Position.Y - rayResult.Position.Y > 5
			end
			local function fastTP(targetHRP, x, y, z, mode)
				local localChar = getCharacter()
				local localHRP = getHRP(localChar)
				if not localHRP or not targetHRP then return end

				localHRP.AssemblyLinearVelocity = Vector3.zero
				localHRP.AssemblyAngularVelocity = Vector3.zero

				local desiredPos = (targetHRP.CFrame * CFrame.new(
					x + math.random(-1, 1) / 40,
					y,
					z + math.random(-1, 1) / 40
					)).Position

				local raycastParams = RaycastParams.new()
				raycastParams.FilterDescendantsInstances = {localChar, targetHRP.Parent}
				raycastParams.FilterType = Enum.RaycastFilterType.Exclude
				raycastParams.IgnoreWater = true

				local airborne = isTargetAirborne(targetHRP)
				local finalPos = desiredPos

				if not airborne then
					local rayResult = Workspace:Raycast(desiredPos + Vector3.new(0, 8, 0), Vector3.new(0, -25, 0), raycastParams)
					if rayResult then
						local groundY = rayResult.Position.Y + 3
						if math.abs(groundY - desiredPos.Y) < 8 then
							finalPos = Vector3.new(desiredPos.X, groundY, desiredPos.Z)
						end
					elseif desiredPos.Y < lastSafePosition.Y - 10 then
						finalPos = Vector3.new(desiredPos.X, lastSafePosition.Y, desiredPos.Z)
					end
				end

				local flatOffset = Vector3.new(finalPos.X - targetHRP.Position.X, 0, finalPos.Z - targetHRP.Position.Z)
				local minDist = mode == "stomp" and 1.2 or 2.8
				if flatOffset.Magnitude < minDist then
					local dir = flatOffset.Magnitude > 0.1 and flatOffset.Unit or -targetHRP.CFrame.LookVector
					local pushed = targetHRP.Position + dir * minDist
					finalPos = Vector3.new(pushed.X, finalPos.Y, pushed.Z)
				end

				local aimY = targetHRP.Position.Y + (mode == "stomp" and -1 or -2.5)
				localHRP.CFrame = CFrame.lookAt(finalPos, Vector3.new(targetHRP.Position.X, aimY, targetHRP.Position.Z))
				localHRP.AssemblyLinearVelocity = Vector3.zero
				localHRP.AssemblyAngularVelocity = Vector3.zero

				updateSafePosition()
			end

			local function fireHit(char)
				if not char or not getgenv().LoggedKeys.ATMHitKey then return end
				pcall(function()
					ReplicatedStorage.Event:FireServer({
						Key = getgenv().LoggedKeys.ATMHitKey, 
						Event = "Hit",
						ClientHitbox = {char}
					})
				end)
			end

			local function fireSnatch()
				if not getgenv().LoggedKeys.ATMHitKey then return end
				pcall(function()
					ReplicatedStorage.Event:FireServer({
						Key = getgenv().LoggedKeys.ATMHitKey, 
						Event = "Snatch",
						ClientHitbox = {}
					})
				end)
			end

			local function fireStomp()
				if not getgenv().LoggedKeys.StompKey then return end
				pcall(function()
					ReplicatedStorage.Event:FireServer({
						Key = getgenv().LoggedKeys.StompKey, 
						Event = "Stomp"
					})
				end)
			end

			local function attackTarget(targetChar, light)
				if not targetChar or not targetChar.Parent then return end
				equipSelectedWeapon() 
				fireHit(targetChar)
				if not light then
					fireHit(targetChar)
					fireHit(targetChar)
				end
				task.defer(function()
					if targetChar.Parent then
						equipSelectedWeapon()
						fireHit(targetChar)
					end
				end)
				lastHitTime = os.clock()
			end
			local function getFreeHospital()
				local map = Workspace:FindFirstChild("Map")
				if not map then return nil end
				local buildings = map:FindFirstChild("Buildings")
				if not buildings then return nil end
				for _, desc in ipairs(buildings:GetDescendants()) do
					if desc:IsA("Model") and desc.Name == "HospitalHeal" then
						local main = desc:FindFirstChild("Main", true)
						if main and main:IsA("MeshPart") then
							local occupied = false
							for _, child in ipairs(desc:GetDescendants()) do
								if child:IsA("Seat") and child.Occupant ~= nil then
									occupied = true
									break
								end
							end
							if not occupied then
								local attach = main:FindFirstChild("Attachment", true)
								if attach then
									local prompt = attach:FindFirstChild("HealHospital")
									if prompt and prompt:IsA("ProximityPrompt") then
										return {Prompt = prompt, Main = main}
									end
								end
							end
						end
					end
				end
				return nil
			end
			local function healViaHospital(critical)
				local char = getCharacter()
				local hrp = getHRP(char)
				local hum = char and char:FindFirstChildOfClass("Humanoid")
				if not hrp or not hum or hum.Health >= 100 then return end
				if critical then healingCritical = true else healingPostStomp = true end
				local hosp = getFreeHospital()
				if not hosp then
					hrp.CFrame = getSafeLocation()
					healingCritical = false healingPostStomp = false
					return
				end
				local prompt = hosp.Prompt
				prompt.MaxActivationDistance = math.huge
				prompt.HoldDuration = 0
				local healComplete = false
				local healLoop = task.spawn(function()
					while (healingCritical or healingPostStomp) and hum.Health < 100 and running do
						hrp.CFrame = hosp.Main.CFrame
						hrp.AssemblyLinearVelocity = Vector3.zero
						hrp.AssemblyAngularVelocity = Vector3.zero
						fireproximityprompt(prompt)
						RunService.RenderStepped:Wait()
					end
					healComplete = true
				end)
				repeat task.wait() until healComplete or not running
				healingCritical = false healingPostStomp = false
				equipSelectedWeapon() 
				updateSafePosition()
			end
			local function shouldCriticalHeal()
				local hum = getCharacter() and getCharacter():FindFirstChildOfClass("Humanoid")
				return hum and hum.Health < 40 and not healingCritical and not healingPostStomp and not stompInProgress
			end
			local function shouldPostStompHeal()
				local hum = getCharacter() and getCharacter():FindFirstChildOfClass("Humanoid")
				return hum and hum.Health > 0 and hum.Health < 100 and not healingCritical and not healingPostStomp and not stompInProgress
			end
			local function checkFallingDeath()
				if not running or healingCritical or healingPostStomp then return end
				local char = getCharacter()
				local hrp = getHRP(char)
				local hum = char and char:FindFirstChildOfClass("Humanoid")
				if not hrp then return end

				local falling = hrp.Position.Y < -30
				if hum and hum.FloorMaterial == Enum.Material.Air and hrp.Position.Y < lastSafePosition.Y - 15 then
					falling = true
				end

				if falling then
					local safe = getSafeLocation()
					hrp.CFrame = safe
					hrp.AssemblyLinearVelocity = Vector3.zero
					hrp.AssemblyAngularVelocity = Vector3.zero
					ensureLocalCollide()
				end
			end
			local function waitForForceField()
				if not lockedTarget then return end
				waitingForFF = true
				local localHRP = getHRP(getCharacter())
				local safe = getSafeLocation()
				if localHRP and safe then
					localHRP.CFrame = safe
					localHRP.AssemblyLinearVelocity = Vector3.zero
					localHRP.AssemblyAngularVelocity = Vector3.zero
				end
				while running and lockedTarget do
					local targetChar = lockedTarget.Character
					if not targetChar or not hasForceField(targetChar) then break end
					task.wait(0.05)
					if shouldCriticalHeal() then healViaHospital(true) end
				end
				waitingForFF = false
			end
			local function executeStompSequence(targetChar)
				if stompInProgress or not targetChar then return false end
				stompInProgress = true
				setTargetNoCollide(targetChar, true)
				local targetHRP = getHRP(targetChar)
				if not targetHRP then
					stompInProgress = false
					return false
				end
				local stompRetries = 0
				local maxRetries = 6
				local targetDied = false
				local stompLoop = task.spawn(function()
					while stompInProgress and running and targetChar.Parent do
						targetHRP = getHRP(targetChar)
						if targetHRP then fastTP(targetHRP, 0, 0.5, 0, "stomp") end
						RunService.RenderStepped:Wait()
					end
				end)
				task.wait(0.08)
				repeat
					local targetHum = targetChar:FindFirstChildOfClass("Humanoid")
					if not targetHum or targetHum.Health <= 0 then
						targetDied = true
						break
					end
					if targetHum.Health > STOMP_HEALTH then
						task.cancel(stompLoop)
						stompInProgress = false
						return false
					end
					if not isTargetDowned(targetChar) and targetHum.Health > 1 then
						task.cancel(stompLoop)
						stompInProgress = false
						return false
					end
					fireStomp()
					stompRetries += 1
					task.wait(0.05)
				until stompRetries >= maxRetries or not running or not targetChar.Parent
				local finalTargetHum = targetChar:FindFirstChildOfClass("Humanoid")
				targetDied = targetDied or not targetChar.Parent or (finalTargetHum and finalTargetHum.Health <= 0)
				task.cancel(stompLoop)
				stompInProgress = false
				return targetDied
			end
			local function executeKillSequence()
				if not lockedTarget then return false end
				local killed = false

				while running and lockedTarget do
					if isTargetPlayerDead(lockedTarget) then
						killed = true
						notify("Target Killed", lockedTarget.Name)
						break
					end

					local targetChar = lockedTarget.Character
					if not targetChar then
						task.wait(0.1)
						continue
					end

					if hasEnabledPVPTag(targetChar) then break end

					setTargetNoCollide(targetChar, true)

					checkFallingDeath()
					if killAll1Mode and shouldCriticalHeal() then
						healViaHospital(true)
					end
					if hasForceField(targetChar) then
						waitForForceField()
					end

					targetChar = lockedTarget.Character
					if not targetChar then continue end

					local targetHum = targetChar:FindFirstChildOfClass("Humanoid")
					if not targetHum or targetHum.Health <= 0 then
						killed = true
						notify("Target Killed", lockedTarget.Name)
						break
					end

					local currentHRP = getHRP(targetChar)
					if currentHRP then
						if targetHum.Health > STOMP_HEALTH then
							fastTP(currentHRP, 0, 0, -1, "punch")
							if os.clock() - lastHitTime >= MIN_HIT_INTERVAL then
								attackTarget(targetChar, false)
							end
						else
							fastTP(currentHRP, 0, 0, 0, "stomp")
							equipSelectedWeapon()
							fireHit(targetChar)
							fireStomp()
							if executeStompSequence(targetChar) then
								killed = true
								notify("Target Killed", lockedTarget.Name)
								break
							end
							targetHum = targetChar:FindFirstChildOfClass("Humanoid")
							if not targetHum or targetHum.Health <= 0 then
								killed = true
								notify("Target Killed", lockedTarget.Name)
								break
							end
						end
					end

					RunService.RenderStepped:Wait()
				end

				local char = lockedTarget and lockedTarget.Character
				if char then setTargetNoCollide(char, false) end
				return killed
			end

			local mainThread
			local function start(mode)
				if running then return end

				-- Block start if keys are missing
				if not areKeysValid() then return end

				selectedWeapon = nil
				notify("Equip Weapon", "Equip the weapon you want to use, then click the button again to confirm!")
				notify("Weapon Selection", "Your current equipped tool will be your selected weapon")

				local char = getCharacter()
				if not char then
					notify("Error", "No character found!")
					return
				end

				local currentTool = char:FindFirstChildOfClass("Tool")
				if not currentTool then
					local backpackTools = LocalPlayer.Backpack:GetChildren()
					if #backpackTools > 0 then
						currentTool = backpackTools[1]
						notify("Using Default", "Using "..currentTool.Name.." (first in backpack)")
					else
						notify("Error", "No tools found! Equip a weapon first.")
						return
					end
				else
					notify("Weapon Selected", "Using "..currentTool.Name)
				end

				selectedWeapon = currentTool
				equipSelectedWeapon()

				running = true
				healingCritical = false
				healingPostStomp = false
				stompInProgress = false
				waitingForFF = false
				lockedTarget = nil
				lastKilledTarget = nil
				lastHitTime = 0
				updateSafePosition()

				if mode == "killall1" then
					killAll1Mode = true
					uiStroke.Color = Color3.fromRGB(255,255,255)
					killAll1Stroke.Color = Color3.fromRGB(0,255,0)
					notify("KillAll Mode", "Starting KillAll1 mode")
				else
					killAll1Mode = false
					uiStroke.Color = Color3.fromRGB(0,255,0)
					killAll1Stroke.Color = Color3.fromRGB(255,255,255)
					notify("Single Kill Mode", "Starting single target mode")
				end

				fireSnatch()
				ensureLocalCollide()

				mainThread = task.spawn(function()
					while running do
						checkFallingDeath()
						if healingCritical or healingPostStomp or stompInProgress or waitingForFF then
							RunService.RenderStepped:Wait()
							continue
						end
						if killAll1Mode and shouldCriticalHeal() then
							healViaHospital(true)
							continue
						end
						if killAll1Mode then
							local localHRP = getHRP(getCharacter())
							local targetHRP = lockedTarget and lockedTarget.Character and getHRP(lockedTarget.Character)
							if localHRP then
								if targetHRP and isTargetAirborne(targetHRP) then
									localHRP.AssemblyLinearVelocity = Vector3.new(0, 0, 0)
								else
									localHRP.AssemblyLinearVelocity = Vector3.new(0, localHRP.AssemblyLinearVelocity.Y, 0)
								end
								localHRP.AssemblyAngularVelocity = Vector3.zero
							end
						end

						local targetChar = acquireTarget()
						if targetChar then
							local killed = executeKillSequence()
							releaseTarget()
							if killed then
								if needsHealAfterKill() then
									healViaHospital(false)
								end
							else
								RunService.RenderStepped:Wait()
							end
						else
							RunService.RenderStepped:Wait()
						end
					end
				end)
			end

			local function stop()
				running = false
				lockedTarget = nil
				lastKilledTarget = nil
				lastHitTime = 0
				killAll1Mode = false
				healingCritical = false
				healingPostStomp = false
				waitingForFF = false
				stompInProgress = false
				selectedWeapon = nil 
				clearAllNoCollide()
				uiStroke.Color = Color3.fromRGB(255,255,255)
				killAll1Stroke.Color = Color3.fromRGB(255,255,255)
				notify("Stopped", "Kill mode stopped")
				if mainThread then task.cancel(mainThread) mainThread = nil end
			end

			local function toggle()
				if running then
					stop()
				else
					start()
				end
			end

			button.MouseButton1Click:Connect(toggle)

			killAll1Button.MouseButton1Click:Connect(function()
				if running and killAll1Mode then
					stop()
				else
					stop()
					start("killall1")
				end
			end)

			LocalPlayer.CharacterAdded:Connect(function(char)
				if running then
					task.wait(0.3)
					local hrp = char:WaitForChild("HumanoidRootPart")
					hrp.AssemblyLinearVelocity = Vector3.zero
					hrp.AssemblyAngularVelocity = Vector3.zero
					ensureLocalCollide()
					equipSelectedWeapon()
					updateSafePosition()
					if killAll1Mode and shouldCriticalHeal() then healViaHospital(true) end
				end
			end)
		end
		coroutine.wrap(YTZOF_fake_script)()
		local function RUHK_fake_script() -- ATMFarm.LocalScript 
			local script = Instance.new('LocalScript', ATMFarm)

			local Players = game:GetService("Players")
			local RunService = game:GetService("RunService")
			local TweenService = game:GetService("TweenService")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")

			local LocalPlayer = Players.LocalPlayer
			local button = script.Parent

			local TELEPORT_UP_HEIGHT = 100
			local TELEPORT_STEP_DELAY = 0.22
			local STEP_TELEPORT_SIZE = 45
			local TWEEN_THRESHOLD = 76
			local TWEEN_WALKSPEED = 48
			local targetColor = Color3.fromRGB(113,118,165)

			local running = false
			local farmActive = false
			local processing = false
			local activeTween = nil

			local Character, HRP
			local teleportThread, loopThread, jumpConnection, spamThread, fistUnequipConn
			local originalGravity = workspace.Gravity
			local allATMs = {}
			local currentTarget = nil
			local Fist

			local uiStroke = button:FindFirstChild("UIStroke") or Instance.new("UIStroke")
			uiStroke.Parent = button
			uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			uiStroke.Transparency = 0
			uiStroke.Thickness = 0.5
			uiStroke.Color = Color3.fromRGB(255,255,255)

			local targetRemote = ReplicatedStorage:WaitForChild("Event", 10)

			local mainFrameCache = nil
			do
				if script.Parent.Parent:IsA("ScreenGui") then
					mainFrameCache = script.Parent.Parent:FindFirstChild("MainFrame")
				end
				if not mainFrameCache then
					for _, screen in ipairs(LocalPlayer.PlayerGui:GetChildren()) do
						if screen:IsA("ScreenGui") then
							mainFrameCache = screen:FindFirstChild("MainFrame")
							if mainFrameCache then break end
						end
					end
				end
			end

			local function enableMainFrameSafe()
				if mainFrameCache then
					pcall(function()
						mainFrameCache.Visible = true
						mainFrameCache.Enabled = true
						mainFrameCache.Active = true
						mainFrameCache.Transparency = 0
						for _, child in ipairs(mainFrameCache:GetDescendants()) do
							if child:IsA("GuiObject") then
								child.Visible = true
								child.Active = true
								child.Transparency = 0
							end
						end
					end)
				end
			end

			local function equipFist()
				if not farmActive then return end
				if not Character or not LocalPlayer then return end
				local Humanoid = Character:FindFirstChildOfClass("Humanoid")
				if not Humanoid or Humanoid.Health <= 0 then return end
				local backpack = LocalPlayer:WaitForChild("Backpack")
				local newFist = Character:FindFirstChild("Fist") or backpack:FindFirstChild("Fist")
				if not newFist then return end
				if newFist.Parent ~= Character then
					Humanoid:EquipTool(newFist)
				end
				if Fist ~= newFist then
					if fistUnequipConn then fistUnequipConn:Disconnect() end
					Fist = newFist
					fistUnequipConn = Fist.Unequipped:Connect(equipFist)
				end
			end

			local function fireHitATM()
				local keyToUse = getgenv().LoggedKeys and getgenv().LoggedKeys.ATMHitKey
				if not keyToUse then return end
				local args = {
					{
						Key = keyToUse,
						Event = "Hit",
						ClientHitbox = {}
					}
				}
				targetRemote:FireServer(unpack(args))
			end

			local function fireCollectRemote()
				targetRemote:FireServer({Event = "CollectDollar", Dollar = Instance.new("MeshPart")})
			end

			local function refreshCharacter()
				Character = LocalPlayer.Character or LocalPlayer.CharacterAdded:Wait()
				if Character then HRP = Character:WaitForChild("HumanoidRootPart",10) end
			end
			refreshCharacter()

			LocalPlayer.CharacterAdded:Connect(function(char)
				Character = char
				HRP = char:WaitForChild("HumanoidRootPart",10)
				if farmActive then
					workspace.Gravity = 0
					equipFist()
				end
			end)

			for _,v in workspace.Map.ATMs:GetChildren() do if v:IsA("Model") then table.insert(allATMs,v) end end

			local function freezeVel()
				if HRP then HRP.AssemblyLinearVelocity, HRP.AssemblyAngularVelocity = Vector3.zero, Vector3.zero end
			end

			local function twoStepTeleport(targetCFrame)
				if not HRP or not farmActive then return end
				freezeVel()
				if activeTween then activeTween:Cancel() activeTween = nil end

				local targetHorizontalPos = targetCFrame.Position * Vector3.new(1, 0, 1)
				local currentHorizontalPos = HRP.CFrame.Position * Vector3.new(1, 0, 1)
				local horizontalDiff = targetHorizontalPos - currentHorizontalPos
				local totalHorizontalDistance = horizontalDiff.Magnitude

				if totalHorizontalDistance <= 0.1 then
					HRP.CFrame = targetCFrame
					freezeVel()
					task.wait(TELEPORT_STEP_DELAY)
					HRP.CFrame = targetCFrame
					freezeVel()
					return
				end

				if totalHorizontalDistance < TWEEN_THRESHOLD then
					local tweenDuration = math.max(totalHorizontalDistance / TWEEN_WALKSPEED, 0.1)
					local tweenInfo = TweenInfo.new(tweenDuration, Enum.EasingStyle.Linear, Enum.EasingDirection.Out)
					activeTween = TweenService:Create(HRP, tweenInfo, {CFrame = targetCFrame})
					local tweenCompleted = Instance.new("BindableEvent")

					local tempVelConnection = RunService.RenderStepped:Connect(function()
						if not HRP or not HRP.Parent or not farmActive then activeTween:Cancel() tweenCompleted:Fire(false) end
						freezeVel()
					end)

					activeTween.Completed:Connect(function(state)
						tempVelConnection:Disconnect()
						tweenCompleted:Fire(state == Enum.PlaybackState.Completed)
					end)

					activeTween:Play()
					local success = tweenCompleted.Event:Wait()
					tweenCompleted:Destroy()
					activeTween = nil

					if not success or not farmActive then return end
					HRP.CFrame = targetCFrame
					freezeVel()
					task.wait(TELEPORT_STEP_DELAY/2)
					HRP.CFrame = targetCFrame
					freezeVel()
					return
				end

				local moveDirection = horizontalDiff.Unit
				local totalSteps = math.ceil(totalHorizontalDistance / STEP_TELEPORT_SIZE)

				for stepIndex = 1, totalSteps do
					if not farmActive then return end
					HRP.CFrame = CFrame.new(currentHorizontalPos + Vector3.new(0, TELEPORT_UP_HEIGHT, 0)) * targetCFrame.Rotation
					freezeVel()
					task.wait(TELEPORT_STEP_DELAY)
					local stepDistance = math.min(STEP_TELEPORT_SIZE, totalHorizontalDistance - (stepIndex - 1) * STEP_TELEPORT_SIZE)
					local nextHorizontalPos = currentHorizontalPos + moveDirection * stepDistance
					HRP.CFrame = CFrame.new(nextHorizontalPos + Vector3.new(0, TELEPORT_UP_HEIGHT, 0)) * targetCFrame.Rotation
					freezeVel()
					task.wait(TELEPORT_STEP_DELAY)
					HRP.CFrame = CFrame.new(nextHorizontalPos + Vector3.new(0, targetCFrame.Position.Y, 0)) * targetCFrame.Rotation
					freezeVel()
					task.wait(TELEPORT_STEP_DELAY)
					currentHorizontalPos = nextHorizontalPos
				end

				HRP.CFrame = targetCFrame
				freezeVel()
				task.wait(TELEPORT_STEP_DELAY / 2)
				HRP.CFrame = targetCFrame
				freezeVel()
			end

			local function makeUncollidable(model)
				for _,v in model:GetDescendants() do if v:IsA("BasePart") then v.CanCollide = false end end
			end

			local function screenIsTarget(atm)
				local screen = atm:FindFirstChild("Screen")
				return screen and screen:IsA("MeshPart") and screen.Color == targetColor
			end

			local function getMatchingATMs()
				if not HRP then return {} end
				local t = {}
				for _, atm in allATMs do if screenIsTarget(atm) then table.insert(t, {ATM = atm, Dist = (HRP.Position - atm:GetPivot().Position).Magnitude}) end end
				table.sort(t, function(a,b) return a.Dist < b.Dist end)
				local out = {} for _,e in t do table.insert(out, e.ATM) end return out
			end

			local function stopTeleportLoop() if teleportThread then task.cancel(teleportThread) teleportThread = nil end currentTarget = nil end
			local function startTeleportLoop()
				stopTeleportLoop()
				teleportThread = task.spawn(function() while farmActive do if currentTarget and HRP then HRP.CFrame = currentTarget:GetPivot() freezeVel() end RunService.Heartbeat:Wait() end end)
			end

			local function startConstantSpam()
				if spamThread then task.cancel(spamThread) spamThread = nil end
				spamThread = task.spawn(function()
					while farmActive do
						fireHitATM()
						fireCollectRemote()
						task.wait(0.05)
					end
				end)
			end

			local function processATM(atm)
				if not HRP then return end
				makeUncollidable(atm)
				currentTarget = atm
				startTeleportLoop()
				local attempts = 0
				while farmActive and screenIsTarget(atm) and attempts < 8 do
					attempts += 1
					twoStepTeleport(atm:GetPivot() * CFrame.new(0,-2,0))
					for i = 1,18 do if not farmActive then break end task.wait(0.15) end
				end
				stopTeleportLoop()
			end

			local function doCycle()
				if processing then return end
				processing = true
				local atms = getMatchingATMs()
				for _,atm in atms do if farmActive then processATM(atm) task.wait(0.05) end end
				processing = false
			end

			function startFarm()
				if farmActive then return end
				farmActive = true
				uiStroke.Color = Color3.fromRGB(0,255,0)
				originalGravity = workspace.Gravity
				workspace.Gravity = 0
				refreshCharacter()
				equipFist()
				startConstantSpam()
				jumpConnection = RunService.Heartbeat:Connect(function()
					local Humanoid = Character and Character:FindFirstChildOfClass("Humanoid")
					if Humanoid and Humanoid.Health > 0 then Humanoid.Jump = true end
				end)
				loopThread = task.spawn(function() while farmActive do pcall(doCycle) task.wait(0.05) end end)
			end

			local function stop()
				running = false
				farmActive = false
				uiStroke.Color = Color3.fromRGB(255,255,255)
				workspace.Gravity = originalGravity
				if activeTween then activeTween:Cancel() activeTween = nil end
				if jumpConnection then jumpConnection:Disconnect() jumpConnection = nil end
				if fistUnequipConn then fistUnequipConn:Disconnect() fistUnequipConn = nil end
				if spamThread then task.cancel(spamThread) spamThread = nil end
				Fist = nil
				stopTeleportLoop()
				processing = false
				if loopThread then task.cancel(loopThread) loopThread = nil end
			end

			button.MouseButton1Click:Connect(function()
				if running then
					stop()
				else
					local keys = getgenv().LoggedKeys
					if not keys or not keys.ATMHitKey then
						return
					end
					running = true
					farmActive = false
					uiStroke.Color = Color3.fromRGB(255,255,0)
					task.defer(function()
						enableMainFrameSafe()
						startFarm()
					end)
				end
			end)
		end
		coroutine.wrap(RUHK_fake_script)()
		local function FHTIPIR_fake_script() -- PlayerFrame.ArresttHINGIES 
			local script = Instance.new('LocalScript', PlayerFrame)

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")
			local StarterGui = game:GetService("StarterGui")
			local RunService = game:GetService("RunService")

			local LocalPlayer = Players.LocalPlayer
			local MainFrame = script.Parent
			local WantedPlayerFrame = MainFrame:WaitForChild("WantedPlayerFrame")
			local PlayerButton = WantedPlayerFrame:WaitForChild("PlayerButton")
			local ArrestPersonButton = MainFrame:WaitForChild("ArrestPersonButton")
			local Remote = ReplicatedStorage:WaitForChild("Event")

			local arrestStroke = Instance.new("UIStroke")
			arrestStroke.Parent = ArrestPersonButton
			arrestStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			arrestStroke.Color = Color3.fromRGB(255, 255, 255)
			arrestStroke.Thickness = 0.5

			local arrestRunning = false
			local selectedPlayer = nil
			local listOpen = false
			local activeListButtons = {} 

			WantedPlayerFrame.ClipsDescendants = true
			WantedPlayerFrame.Size = UDim2.new(0, 397, 0, 30)

			local template = PlayerButton:Clone()
			template.Visible = false
			template.Name = "_Template"
			template.Parent = WantedPlayerFrame

			local function notify(title, text, duration)
				pcall(function()
					StarterGui:SetCore("SendNotification", {Title = title, Text = text, Duration = duration or 3})
				end)
			end

			local function getHRP(char)
				return char and char:FindFirstChild("HumanoidRootPart")
			end

			local function parseBounty(text)
				local cleaned = text:gsub("[%$,]", "")
				return tonumber(cleaned) or 0
			end

			local function findPlayerByName(name)
				local nameLower = name:lower()
				for _, plr in ipairs(Players:GetPlayers()) do
					if plr.Name:lower() == nameLower then
						return plr
					end
					if plr.DisplayName:lower() == nameLower then
						return plr
					end
				end
				return nil
			end

			local function isCop(plr)
				local backpack = plr:FindFirstChild("Backpack")
				if backpack and backpack:FindFirstChild("Handcuffs") then
					return true
				end
				local char = plr.Character
				if char and char:FindFirstChild("Handcuffs") then
					return true
				end
				return false
			end

			local function getWantedPlayers()
				local wantedList = {}
				local alreadyAdded = {}

				local map = workspace:FindFirstChild("Map")
				local buildings = map and map:FindFirstChild("Buildings")
				local police = buildings and buildings:FindFirstChild("Police")
				local board = police and police:FindFirstChild("Board")
				local partGui = board and board:FindFirstChild("PartGui")
				local gui = partGui and partGui:FindFirstChild("Gui")
				local listFrame = gui and gui:FindFirstChild("List")

				if not listFrame then return {} end

				for _, sample in ipairs(listFrame:GetChildren()) do
					if not sample:IsA("Frame") then continue end
					if sample.Name ~= "Sample" then continue end
					if not sample.Visible then continue end 

					local displayName = sample:FindFirstChild("Displayname")
					local bounty = sample:FindFirstChild("Bounty")

					if not displayName or not bounty or not displayName:IsA("TextLabel") or not bounty:IsA("TextLabel") then
						continue
					end

					local name = displayName.Text
					if name == "" then continue end

					local bountyVal = parseBounty(bounty.Text)
					if bountyVal == 100 or bountyVal <= 0 then continue end

					local plr = findPlayerByName(name)
					if not plr or plr == LocalPlayer or alreadyAdded[plr] then continue end
					if not plr.Character or not getHRP(plr.Character) then continue end
					if isCop(plr) then continue end

					alreadyAdded[plr] = true
					table.insert(wantedList, {
						Player = plr,
						DisplayName = plr.DisplayName,
						Username = plr.Name,
						Bounty = bountyVal
					})
				end

				return wantedList
			end

			local function clearList()
				for _, btn in ipairs(activeListButtons) do
					if btn and btn.Parent then
						btn:Destroy()
					end
				end
				activeListButtons = {} 
			end

			local function closeList()
				listOpen = false
				WantedPlayerFrame.Size = UDim2.new(0, 397, 0, 30)
				clearList()
			end

			local function buildList()
				clearList()
				local wantedPlayers = getWantedPlayers()

				if #wantedPlayers == 0 then
					PlayerButton.Text = "No wanted players"
					return
				end

				for i, data in ipairs(wantedPlayers) do
					local clone = template:Clone()
					clone.Visible = true
					clone.Name = data.Username
					clone.Text = data.DisplayName .. " - $" .. data.Bounty
					clone.Parent = WantedPlayerFrame
					clone.Position = UDim2.new(0, 0, 0, i * 35)

					table.insert(activeListButtons, clone) -- Track new button

					clone.MouseButton1Click:Connect(function()
						selectedPlayer = data.Player
						PlayerButton.Text = "Target: " .. data.DisplayName
						closeList()
						notify("Target Selected", data.Username, 2)
					end)
				end

				WantedPlayerFrame.Size = UDim2.new(0, 397, 0, 30 + (#wantedPlayers * 35))
			end

			PlayerButton.MouseButton1Click:Connect(function()
				if listOpen then
					closeList()
				else
					listOpen = true
					buildList()
				end
			end)

			local function equipHandcuffs()
				local char = LocalPlayer.Character
				if not char then return end
				local hum = char:FindFirstChildWhichIsA("Humanoid")
				if not hum then return end
				if char:FindFirstChild("Handcuffs") then return end
				local tool = LocalPlayer.Backpack:FindFirstChild("Handcuffs")
				if tool then
					hum:EquipTool(tool)
					task.wait(0.2)
				end
			end

			local function hasHandcuffs()
				local char = LocalPlayer.Character
				if char and char:FindFirstChild("Handcuffs") then return true end
				if LocalPlayer.Backpack and LocalPlayer.Backpack:FindFirstChild("Handcuffs") then return true end
				return false
			end

			local function startArrest()
				if arrestRunning then return end
				if not selectedPlayer then
					notify("Error", "Select a player first", 3)
					return
				end

				arrestRunning = true
				arrestStroke.Color = Color3.fromRGB(0, 255, 0)

				task.spawn(function()
					if not hasHandcuffs() then
						Remote:FireServer({Event = "StartJob", Job = "Police"})
						task.wait(1.5)
					end

					equipHandcuffs()
					task.wait(0.3)

					local targetChar = selectedPlayer.Character
					local targetHRP = getHRP(targetChar)
					if not targetHRP then
						notify("Error", "Target not found", 3)
						arrestRunning = false
						arrestStroke.Color = Color3.fromRGB(255, 255, 255)
						return
					end

					local arrestComplete = false
					local teleportConnection = RunService.Heartbeat:Connect(function()
						if not arrestRunning or arrestComplete then
							teleportConnection:Disconnect()
							return
						end
						local localHRP = getHRP(LocalPlayer.Character)
						local currentTargetHRP = getHRP(selectedPlayer and selectedPlayer.Character)
						if localHRP and currentTargetHRP then
							localHRP.AssemblyLinearVelocity = Vector3.zero
							localHRP.AssemblyAngularVelocity = Vector3.zero
							localHRP.CFrame = currentTargetHRP.CFrame * CFrame.new(0, 0, -1)
							localHRP.AssemblyLinearVelocity = Vector3.zero
							localHRP.AssemblyAngularVelocity = Vector3.zero
						end
					end)

					task.wait(0.8)

					local grabStartTime = tick()
					while tick() - grabStartTime < 1.2 and arrestRunning do
						if selectedPlayer and selectedPlayer.Character then
							Remote:FireServer({Event = "Grab", ClientHitbox = {selectedPlayer.Character}})
						end
						task.wait(0.05)
					end

					arrestComplete = true
					teleportConnection:Disconnect()

					local jailPos = CFrame.new(116, 45, 154)
					local localHRP = getHRP(LocalPlayer.Character)
					if localHRP then
						localHRP.AssemblyLinearVelocity = Vector3.zero
						localHRP.AssemblyAngularVelocity = Vector3.zero
						localHRP.CFrame = jailPos
						localHRP.AssemblyLinearVelocity = Vector3.zero
						localHRP.AssemblyAngularVelocity = Vector3.zero
					end
					task.wait(0.1)

					local arrestStartTime = tick()
					while tick() - arrestStartTime < 3 and arrestRunning do
						if selectedPlayer and selectedPlayer.Character then
							Remote:FireServer({Event = "ArrestPlayer", Character = selectedPlayer.Character})
						end
						task.wait(0.05)
					end

					buildList()

					notify("Complete", "Arrest finished", 3)
					arrestRunning = false
					arrestStroke.Color = Color3.fromRGB(255, 255, 255)
					selectedPlayer = nil
					PlayerButton.Text = "Click here for wanted list"
				end)
			end

			ArrestPersonButton.MouseButton1Click:Connect(function()
				if arrestRunning then
					arrestRunning = false
					arrestStroke.Color = Color3.fromRGB(255, 255, 255)
				else
					startArrest()
				end
			end)

			Players.PlayerRemoving:Connect(function(plr)
				if selectedPlayer == plr then
					selectedPlayer = nil
					PlayerButton.Text = "Click here for wanted list"
				end
			end)

			-- Improved auto-refresh: refreshes even when list is closed for instant updates
			task.spawn(function()
				while true do
					task.wait(0.3)
					if listOpen then
						buildList()
					else
						-- Refresh data in background so list is up to date when opened
						getWantedPlayers()
					end
				end
			end)
		end
		coroutine.wrap(FHTIPIR_fake_script)()
		local function QHLUCAY_fake_script() -- PlayerFrame.PlayerThinmgies 
			local script = Instance.new('LocalScript', PlayerFrame)

			getgenv().LoggedKeys = getgenv().LoggedKeys or {
				ATMHitKey = nil,
				StompKey = nil
			}
			getgenv().KeysLogged = getgenv().KeysLogged or false

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")
			local StarterGui = game:GetService("StarterGui")
			local RunService = game:GetService("RunService")

			local LocalPlayer = Players.LocalPlayer

			local MainFrame = script.Parent
			local PlayerFrame = MainFrame:WaitForChild("PlayerFrame")
			local PlayerButton = PlayerFrame:WaitForChild("PlayerButton")

			local KillUserButton = MainFrame:WaitForChild("KillUserButton")
			local SpectateButton = MainFrame:WaitForChild("SpectateButton")
			local TaserPersonButton = MainFrame:WaitForChild("TaserPersonButton")
			local GrabPlayerToVoidButton = MainFrame:WaitForChild("GrabPlayerToVoidButton")

			local Remote = ReplicatedStorage:WaitForChild("Event")

			local function notify(title, text, duration)
				pcall(function()
					StarterGui:SetCore("SendNotification", {
						Title = title,
						Text = text,
						Duration = duration or 3
					})
				end)
			end

			local function areKeysValid()
				if not getgenv().KeysLogged 
					or not getgenv().LoggedKeys.ATMHitKey 
					or not getgenv().LoggedKeys.StompKey then
					notify("MISSING KEYS", "Run your Key Logger script first!")
					notify("INSTRUCTIONS", "1. Punch an ATM once | 2. Press E/Stomp once")
					return false
				end
				notify("KEYS LOADED", "Using saved Hit/Stomp keys from logger")
				return true
			end

			local function setupStroke(button)
				local oldStroke = button:FindFirstChild("UIStroke")
				if oldStroke then
					oldStroke:Destroy()
				end

				local uiStroke = Instance.new("UIStroke")
				uiStroke.Parent = button
				uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
				uiStroke.Transparency = 0
				uiStroke.Color = Color3.fromRGB(255, 255, 255)
				uiStroke.Thickness = 0.5

				return uiStroke
			end

			local killStroke = setupStroke(KillUserButton)
			local spectateStroke = setupStroke(SpectateButton)
			local taserStroke = setupStroke(TaserPersonButton)
			local grabStroke = setupStroke(GrabPlayerToVoidButton)

			local killRunning = false
			local spectateRunning = false
			local taserRunning = false
			local grabRunning = false
			local lockedPlayer = nil
			local selectedPlayer = nil
			local forceFieldDebounce = false
			local listOpen = false

			local TEMPLATE_HEIGHT = 30
			local PLAYER_SPACING = 35

			PlayerFrame.ClipsDescendants = true
			PlayerFrame.Size = UDim2.new(0, 397, 0, 30)

			local template = PlayerButton:Clone()
			template.Visible = false
			template.Name = "_Template"
			template.Parent = PlayerFrame

			local function getCharacter()
				return LocalPlayer.Character
			end

			local function getHRP(char)
				return char and char:FindFirstChild("HumanoidRootPart")
			end

			local function equipFist()
				local char = getCharacter()
				if not char then return end

				local hum = char:FindFirstChildWhichIsA("Humanoid")
				if not hum then return end

				local tool = LocalPlayer.Backpack:FindFirstChild("Fist")
				if tool then
					hum:EquipTool(tool)
				end
			end

			local function equipTaser()
				local char = getCharacter()
				if not char then return end

				local hum = char:FindFirstChildWhichIsA("Humanoid")
				if not hum then return end

				local tool = LocalPlayer.Backpack:FindFirstChild("Taser")
				if tool then
					hum:EquipTool(tool)
				end
			end

			local function clearList()
				for _, v in ipairs(PlayerFrame:GetChildren()) do
					if v:IsA("TextButton") and v ~= PlayerButton and v.Name ~= "_Template" then
						v:Destroy()
					end
				end
			end

			local function closeList()
				listOpen = false
				PlayerFrame.Size = UDim2.new(0, 397, 0, 30)
				clearList()
			end

			local function buildList()
				clearList()

				local count = 0

				for _, plr in ipairs(Players:GetPlayers()) do
					if plr ~= LocalPlayer then
						count += 1

						local clone = template:Clone()
						clone.Visible = true
						clone.Name = plr.Name
						clone.Text = plr.DisplayName .. " (@" .. plr.Name .. ")"
						clone.Parent = PlayerFrame

						clone.MouseButton1Click:Connect(function()
							selectedPlayer = plr
							PlayerButton.Text = "Target: " .. plr.DisplayName
							closeList()
							notify("Target Selected", plr.Name, 2)
						end)
					end
				end

				PlayerFrame.Size = UDim2.new(0, 397, 0, TEMPLATE_HEIGHT + (count * PLAYER_SPACING))
			end

			PlayerButton.MouseButton1Click:Connect(function()
				if listOpen then
					closeList()
				else
					listOpen = true
					buildList()
				end
			end)

			local function tp(targetHRP, offset)
				local localHRP = getHRP(getCharacter())
				if not localHRP or not targetHRP then return end

				localHRP.AssemblyLinearVelocity = Vector3.zero
				localHRP.AssemblyAngularVelocity = Vector3.zero
				localHRP.CFrame = targetHRP.CFrame * offset
			end

			local function fireHit(char)
				if not char or not getgenv().LoggedKeys.ATMHitKey then return end
				pcall(function()
					Remote:FireServer({
						Key = getgenv().LoggedKeys.ATMHitKey,
						Event = "Hit",
						ClientHitbox = {char}
					})
				end)
			end

			local function fireSnatch()
				if not getgenv().LoggedKeys.ATMHitKey then return end
				pcall(function()
					Remote:FireServer({
						Key = getgenv().LoggedKeys.ATMHitKey,
						Event = "Snatch",
						ClientHitbox = {}
					})
				end)
			end

			local function fireStomp()
				if not getgenv().LoggedKeys.StompKey then return end
				pcall(function()
					Remote:FireServer({
						Key = getgenv().LoggedKeys.StompKey,
						Event = "Stomp"
					})
				end)
			end

			local function fireTaser(targetChar)
				local targetHRP = targetChar and targetChar:FindFirstChild("HumanoidRootPart")
				if not targetHRP then return end

				pcall(function()
					Remote:FireServer({
						ClientHitbox = {},
						Event = "HitSpecialWeapon",
						MousePos = targetHRP.Position
					})
				end)
			end

			local function fireGrab(targetChar)
				pcall(function()
					local args = {
						{
							Event = "Grab",
							ClientHitbox = { targetChar }
						}
					}
					Remote:FireServer(unpack(args))
				end)
			end

			local function startKill()
				if killRunning then return end
				if not areKeysValid() then return end
				if not selectedPlayer then
					notify("Error", "Select a player first", 3)
					return
				end

				lockedPlayer = selectedPlayer
				killRunning = true
				killStroke.Color = Color3.fromRGB(0, 255, 0)

				equipFist()

				task.spawn(function()
					while killRunning do
						if not lockedPlayer or not Players:FindFirstChild(lockedPlayer.Name) then break end

						local targetChar = lockedPlayer.Character
						local targetHRP = getHRP(targetChar)
						local hum = targetChar and targetChar:FindFirstChildWhichIsA("Humanoid")

						if targetChar and targetHRP and hum then
							local ff = targetChar:FindFirstChild("ForceField")

							if ff then
								if not forceFieldDebounce then
									forceFieldDebounce = true
									notify("ForceField", "Waiting...", 2)
								end
								tp(targetHRP, CFrame.new(0, 15, 0))
							else
								forceFieldDebounce = false
								fireSnatch()

								if hum.Health <= 5 then
									for i = 1, 5 do
										if not killRunning then break end
										tp(targetHRP, CFrame.new())
										fireHit(targetChar)
										task.wait(0.08)
										fireStomp()
										RunService.RenderStepped:Wait()
									end
								else
									for i = 1, 3 do
										if not killRunning then break end
										tp(targetHRP, CFrame.new(0, 0, -1.5))
										fireHit(targetChar)
										RunService.RenderStepped:Wait()
									end
								end
							end
						end
						task.wait(0.03)
					end

					killRunning = false
					lockedPlayer = nil
					killStroke.Color = Color3.fromRGB(255, 255, 255)
				end)
			end

			local function stopKill()
				killRunning = false
				lockedPlayer = nil
				killStroke.Color = Color3.fromRGB(255, 255, 255)
			end

			local function startSpectate()
				if spectateRunning then return end
				if not selectedPlayer then
					notify("Error", "Select a player first", 3)
					return
				end

				spectateRunning = true
				spectateStroke.Color = Color3.fromRGB(0, 255, 0)

				local workspaceCamera = game.Workspace.CurrentCamera
				workspaceCamera.CameraSubject = selectedPlayer.Character and selectedPlayer.Character:FindFirstChild("Humanoid")
				notify("Spectating", selectedPlayer.Name, 2)
			end

			local function stopSpectate()
				spectateRunning = false
				spectateStroke.Color = Color3.fromRGB(255, 255, 255)

				local workspaceCamera = game.Workspace.CurrentCamera
				workspaceCamera.CameraSubject = LocalPlayer.Character and LocalPlayer.Character:FindFirstChild("Humanoid")
				notify("Stopped", "No longer spectating", 2)
			end

			local function startTaser()
				if taserRunning then return end
				if not selectedPlayer then
					notify("Error", "Select a player first", 3)
					return
				end

				taserRunning = true
				taserStroke.Color = Color3.fromRGB(0, 255, 0)

				task.spawn(function()
					local localChar = getCharacter()
					local localHRP = getHRP(localChar)

					if not localHRP then
						taserRunning = false
						taserStroke.Color = Color3.fromRGB(255, 255, 255)
						return
					end

					local originalCFrame = localHRP.CFrame
					equipTaser()

					local startTime = tick()
					while tick() - startTime < 0.4 and taserRunning do
						local targetChar = selectedPlayer.Character
						local targetHRP = getHRP(targetChar)

						if targetHRP and localHRP then
							localHRP.AssemblyLinearVelocity = Vector3.zero
							localHRP.AssemblyAngularVelocity = Vector3.zero
							localHRP.CFrame = targetHRP.CFrame * CFrame.new(0, 5, 0)
						end
						RunService.RenderStepped:Wait()
					end

					local targetChar = selectedPlayer.Character
					if targetChar then fireTaser(targetChar) end

					startTime = tick()
					while tick() - startTime < 2.25 and taserRunning do
						local targetChar = selectedPlayer.Character
						local targetHRP = getHRP(targetChar)

						if targetHRP and localHRP then
							localHRP.AssemblyLinearVelocity = Vector3.zero
							localHRP.AssemblyAngularVelocity = Vector3.zero
							localHRP.CFrame = targetHRP.CFrame * CFrame.new(0, 5, 0)
						end
						RunService.RenderStepped:Wait()
					end

					if localHRP then
						localHRP.AssemblyLinearVelocity = Vector3.zero
						localHRP.AssemblyAngularVelocity = Vector3.zero
						localHRP.CFrame = originalCFrame
					end

					taserRunning = false
					taserStroke.Color = Color3.fromRGB(255, 255, 255)
				end)
			end

			local function stopTaser()
				taserRunning = false
				taserStroke.Color = Color3.fromRGB(255, 255, 255)
			end

			local function startGrabToVoid()
				if grabRunning then return end
				if not selectedPlayer then
					notify("Error", "Select a player first", 3)
					return
				end

				grabRunning = true
				grabStroke.Color = Color3.fromRGB(0, 255, 0)

				task.spawn(function()
					local localChar = getCharacter()
					local localHRP = getHRP(localChar)

					if not localHRP then
						grabRunning = false
						grabStroke.Color = Color3.fromRGB(255, 255, 255)
						return
					end

					local originalCFrame = localHRP.CFrame
					local targetChar = selectedPlayer.Character
					local targetHRP = getHRP(targetChar)

					if not targetChar then
						notify("Error", "Target character not found", 3)
						grabRunning = false
						grabStroke.Color = Color3.fromRGB(255, 255, 255)
						return
					end

					notify("Grab", "Starting grab on " .. selectedPlayer.Name, 2)

					local spamStartTime = tick()
					while tick() - spamStartTime < 1.5 and grabRunning do
						targetChar = selectedPlayer.Character
						targetHRP = getHRP(targetChar)

						if targetHRP and localHRP then
							localHRP.AssemblyLinearVelocity = Vector3.zero
							localHRP.AssemblyAngularVelocity = Vector3.zero
							localHRP.CFrame = targetHRP.CFrame
							fireGrab(targetChar)
						end
						task.wait(0.05)
					end

					task.wait(0.2)

					local voidPosition = CFrame.new(47, -40, -450)
					localHRP.AssemblyLinearVelocity = Vector3.zero
					localHRP.AssemblyAngularVelocity = Vector3.zero
					localHRP.CFrame = voidPosition

					notify("Void", "Teleported to void", 2)

					local voidStartTime = tick()
					while tick() - voidStartTime < 5 and grabRunning do
						localHRP.AssemblyLinearVelocity = Vector3.zero
						localHRP.AssemblyAngularVelocity = Vector3.zero
						localHRP.CFrame = voidPosition
						RunService.RenderStepped:Wait()
					end

					localHRP.AssemblyLinearVelocity = Vector3.zero
					localHRP.AssemblyAngularVelocity = Vector3.zero
					localHRP.CFrame = originalCFrame

					local returnStartTime = tick()
					while tick() - returnStartTime < 2 do
						localHRP.AssemblyLinearVelocity = Vector3.zero
						localHRP.AssemblyAngularVelocity = Vector3.zero
						localHRP.CFrame = originalCFrame
						RunService.RenderStepped:Wait()
					end

					notify("Complete", "Returned to original position", 2)

					grabRunning = false
					grabStroke.Color = Color3.fromRGB(255, 255, 255)
				end)
			end

			local function stopGrabToVoid()
				grabRunning = false
				grabStroke.Color = Color3.fromRGB(255, 255, 255)
			end

			KillUserButton.MouseButton1Click:Connect(function()
				if killRunning then stopKill() else startKill() end
			end)

			SpectateButton.MouseButton1Click:Connect(function()
				if spectateRunning then stopSpectate() else startSpectate() end
			end)

			TaserPersonButton.MouseButton1Click:Connect(function()
				if taserRunning then stopTaser() else startTaser() end
			end)

			GrabPlayerToVoidButton.MouseButton1Click:Connect(function()
				if grabRunning then stopGrabToVoid() else startGrabToVoid() end
			end)

			Players.PlayerAdded:Connect(function()
				if listOpen then buildList() end
			end)

			Players.PlayerRemoving:Connect(function(leavingPlr)
				if selectedPlayer == leavingPlr then
					selectedPlayer = nil
					PlayerButton.Text = "Click here for player list"
					if killRunning and lockedPlayer == leavingPlr then stopKill() end
					if spectateRunning then stopSpectate() end
					if taserRunning then stopTaser() end
					if grabRunning then stopGrabToVoid() end
				end
				if listOpen then buildList() end
			end)

		end
		coroutine.wrap(QHLUCAY_fake_script)()
		local function MXHUXH_fake_script() -- BuyFrame.LocalScript 
			local script = Instance.new('LocalScript', BuyFrame)

			local Players = game:GetService("Players")
			local ReplicatedStorage = game:GetService("ReplicatedStorage")
			local Workspace = game:GetService("Workspace")

			local LocalPlayer = Players.LocalPlayer
			local buttonParent = script.Parent

			local Event = ReplicatedStorage:WaitForChild("Event")
			local list1Button = buttonParent:FindFirstChild("List1")

			local function getPriceFromPrompt(part, promptType)
				for _, child in ipairs(part:GetDescendants()) do
					if child:IsA("Attachment") then
						local prompt = child:FindFirstChild(promptType)
						if prompt and prompt:IsA("ProximityPrompt") then
							return prompt.ObjectText
						end
					end
				end
				return nil
			end

			local function createPurchaseButton(toolPart, price, eventType, toolPath)
				if not list1Button then
					return
				end

				local button = list1Button:Clone()
				button.Name = toolPart.Name
				button.Text = toolPart.Name .. " - " .. (price or "Unknown")
				button.Visible = true
				button.Parent = buttonParent

				button.MouseButton1Click:Connect(function()
					local args = {
						{
							Event = eventType,
							[eventType == "PurchaseFood" and "Food" or "Tool"] = toolPath
						}
					}
					Event:FireServer(unpack(args))
				end)
			end

			local function processFolder(folder, eventType, promptType)
				local map = Workspace:FindFirstChild("Map")
				if not map then
					return
				end

				local purchasable = map:FindFirstChild("Purchasable")
				if not purchasable then
					return
				end

				local targetFolder = purchasable:FindFirstChild(folder)
				if not targetFolder then
					return
				end

				for _, obj in ipairs(targetFolder:GetChildren()) do
					if obj:IsA("BasePart") or obj:IsA("Model") then
						local price = getPriceFromPrompt(obj, promptType)
						if price then
							createPurchaseButton(obj, price, eventType, obj)
						end
					end
				end
			end

			processFolder("Tool", "PurchaseTool", "PurchaseTool")
			processFolder("Food", "PurchaseFood", "Food")

			if list1Button then
				list1Button.Visible = false
			end

		end
	end)
	if not success then
		warn("YOUR CODE ERROR: " .. tostring(errorMsg))
		notify("Error", "Check console for details", 10)
	end
end

local savedKey = loadSavedKey()
if savedKey then
	local result = Junkie.check_key(savedKey)
	if result and result.valid then
		if result.message == "KEYLESS" then
			getgenv().SCRIPT_KEY = "KEYLESS"
		else
			getgenv().SCRIPT_KEY = savedKey
		end
		runYourCode()
	else
		StatusLabel.Text = "Saved key invalid — enter new key."
		StatusLabel.TextColor3 = Color3.fromRGB(255, 100, 100)
	end
end

CloseButton.MouseButton1Click:Connect(function()
	ScreenGui:Destroy()
end)

CopyKeyLinkButton.MouseButton1Click:Connect(function()
	local link = Junkie.get_key_link()
	if link and setclipboard then
		setclipboard(link)
		notify("Copied", "Key link copied to clipboard!")
	else
		notify("Error", link and "Copy not supported" or "Failed to get key link")
	end
end)

local function submitKey()
	local inputKey = KeyTextBox.Text
	if not inputKey or inputKey == "" then
		StatusLabel.Text = "Please enter a key first."
		StatusLabel.TextColor3 = Color3.fromRGB(255, 100, 100)
		return
	end

	local result = Junkie.check_key(inputKey)
	if result and result.valid then
		if result.message == "KEYLESS" then
			getgenv().SCRIPT_KEY = "KEYLESS"
		else
			getgenv().SCRIPT_KEY = inputKey
			saveKey(inputKey)
		end
		StatusLabel.Text = "Key valid! Running your code..."
		StatusLabel.TextColor3 = Color3.fromRGB(100, 255, 100)
		task.wait(0.5)
		runYourCode()
	else
		StatusLabel.Text = "Invalid key. Please try again."
		StatusLabel.TextColor3 = Color3.fromRGB(255, 100, 100)
	end
end

SubmitButton.MouseButton1Click:Connect(submitKey)
KeyTextBox.FocusLost:Connect(function(enterPressed)
	if enterPressed then
		submitKey()
	end
end)
