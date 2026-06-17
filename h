--[=[
 d888b  db    db d888888b      .d888b.      db      db    db  .d8b.  
88' Y8b 88    88   `88'        VP  `8D      88      88    88 d8' `8b 
88      88    88    88            odD'      88      88    88 88ooo88 
88  ooo 88    88    88          .88'        88      88    88 88~~~88 
88. ~8~ 88b  d88   .88.        j88.         88booo. 88b  d88 88   88    @uniquadev
 Y888P  ~Y8888P' Y888888P      888888D      Y88888P ~Y8888P' YP   YP  CONVERTER 
]=]

-- Instances: 121 | Scripts: 12 | Modules: 0 | Tags: 0
local G2L = {};

-- StarterGui.DivazScript
G2L["1"] = Instance.new("ScreenGui", game:GetService("Players").LocalPlayer:WaitForChild("PlayerGui"));
G2L["1"]["Name"] = [[DivazScript]];
G2L["1"]["ZIndexBehavior"] = Enum.ZIndexBehavior.Sibling;
G2L["1"]["ResetOnSpawn"] = false;


-- StarterGui.DivazScript.GUI
G2L["2"] = Instance.new("LocalScript", G2L["1"]);
G2L["2"]["Name"] = [[GUI]];


-- StarterGui.DivazScript.Reset
G2L["3"] = Instance.new("LocalScript", G2L["1"]);
G2L["3"]["Name"] = [[Reset]];


-- StarterGui.DivazScript.MainFrame
G2L["4"] = Instance.new("Frame", G2L["1"]);
G2L["4"]["BorderSizePixel"] = 0;
G2L["4"]["BackgroundColor3"] = Color3.fromRGB(16, 18, 24);
G2L["4"]["Size"] = UDim2.new(0, 607, 0, 575);
G2L["4"]["Position"] = UDim2.new(0.27189, 0, 0.15763, 0);
G2L["4"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4"]["Name"] = [[MainFrame]];


-- StarterGui.DivazScript.MainFrame.UICorner
G2L["5"] = Instance.new("UICorner", G2L["4"]);
G2L["5"]["CornerRadius"] = UDim.new(0, 15);


-- StarterGui.DivazScript.MainFrame.UIStroke
G2L["6"] = Instance.new("UIStroke", G2L["4"]);
G2L["6"]["Transparency"] = 0.2;
G2L["6"]["ApplyStrokeMode"] = Enum.ApplyStrokeMode.Border;
G2L["6"]["Thickness"] = 2;
G2L["6"]["Color"] = Color3.fromRGB(45, 45, 45);


-- StarterGui.DivazScript.MainFrame.Frame
G2L["7"] = Instance.new("Frame", G2L["4"]);
G2L["7"]["BorderSizePixel"] = 0;
G2L["7"]["BackgroundColor3"] = Color3.fromRGB(107, 107, 107);
G2L["7"]["Size"] = UDim2.new(0, 607, 0, 1);
G2L["7"]["Position"] = UDim2.new(0, 0, 0.07652, 0);
G2L["7"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);


-- StarterGui.DivazScript.MainFrame.Frame
G2L["8"] = Instance.new("Frame", G2L["4"]);
G2L["8"]["BorderSizePixel"] = 0;
G2L["8"]["BackgroundColor3"] = Color3.fromRGB(18, 22, 30);
G2L["8"]["Size"] = UDim2.new(0, 7, 0, -514);
G2L["8"]["Position"] = UDim2.new(0.24382, 0, 0.98957, 0);
G2L["8"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);


-- StarterGui.DivazScript.MainFrame.NavBar
G2L["9"] = Instance.new("Frame", G2L["4"]);
G2L["9"]["BorderSizePixel"] = 0;
G2L["9"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["9"]["Size"] = UDim2.new(0, 148, 0, 514);
G2L["9"]["Position"] = UDim2.new(0, 0, 0.09565, 0);
G2L["9"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["9"]["Name"] = [[NavBar]];
G2L["9"]["BackgroundTransparency"] = 1;


-- StarterGui.DivazScript.MainFrame.NavBar.CombatButton
G2L["a"] = Instance.new("TextButton", G2L["9"]);
G2L["a"]["BorderSizePixel"] = 0;
G2L["a"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["a"]["TextSize"] = 14;
G2L["a"]["BackgroundColor3"] = Color3.fromRGB(32, 42, 56);
G2L["a"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["a"]["Size"] = UDim2.new(0, 133, 0, 35);
G2L["a"]["BackgroundTransparency"] = 0.01;
G2L["a"]["Name"] = [[CombatButton]];
G2L["a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["a"]["Text"] = [[]];
G2L["a"]["Position"] = UDim2.new(0, 0, 0.08378, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.CombatButton.UICorner
G2L["b"] = Instance.new("UICorner", G2L["a"]);



-- StarterGui.DivazScript.MainFrame.NavBar.CombatButton.Combat
G2L["c"] = Instance.new("TextLabel", G2L["a"]);
G2L["c"]["BorderSizePixel"] = 0;
G2L["c"]["TextSize"] = 14;
G2L["c"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["c"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["c"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c"]["BackgroundTransparency"] = 1;
G2L["c"]["Size"] = UDim2.new(0, 122, 0, 35);
G2L["c"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["c"]["Text"] = [[Combat]];
G2L["c"]["Name"] = [[Combat]];
G2L["c"]["Position"] = UDim2.new(0.08271, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.UIPadding
G2L["d"] = Instance.new("UIPadding", G2L["9"]);
G2L["d"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["d"]["PaddingLeft"] = UDim.new(0.03, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.UIListLayout
G2L["e"] = Instance.new("UIListLayout", G2L["9"]);
G2L["e"]["Padding"] = UDim.new(0.015, 0);
G2L["e"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.NavBar.BuyButton
G2L["f"] = Instance.new("TextButton", G2L["9"]);
G2L["f"]["BorderSizePixel"] = 0;
G2L["f"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["f"]["TextSize"] = 14;
G2L["f"]["BackgroundColor3"] = Color3.fromRGB(32, 42, 56);
G2L["f"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["f"]["Size"] = UDim2.new(0, 133, 0, 35);
G2L["f"]["BackgroundTransparency"] = 0.01;
G2L["f"]["Name"] = [[BuyButton]];
G2L["f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["f"]["Text"] = [[]];
G2L["f"]["Position"] = UDim2.new(0, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.BuyButton.UICorner
G2L["10"] = Instance.new("UICorner", G2L["f"]);



-- StarterGui.DivazScript.MainFrame.NavBar.BuyButton.TextLabel
G2L["11"] = Instance.new("TextLabel", G2L["f"]);
G2L["11"]["BorderSizePixel"] = 0;
G2L["11"]["TextSize"] = 14;
G2L["11"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["11"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["11"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["11"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["11"]["BackgroundTransparency"] = 1;
G2L["11"]["Size"] = UDim2.new(0, 122, 0, 35);
G2L["11"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["11"]["Text"] = [[Buy Shop]];
G2L["11"]["Position"] = UDim2.new(0.08271, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.FarmButton
G2L["12"] = Instance.new("TextButton", G2L["9"]);
G2L["12"]["BorderSizePixel"] = 0;
G2L["12"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["12"]["TextSize"] = 14;
G2L["12"]["BackgroundColor3"] = Color3.fromRGB(32, 42, 56);
G2L["12"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["12"]["Size"] = UDim2.new(0, 133, 0, 35);
G2L["12"]["BackgroundTransparency"] = 0.01;
G2L["12"]["Name"] = [[FarmButton]];
G2L["12"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["12"]["Text"] = [[]];
G2L["12"]["Position"] = UDim2.new(0, 0, 0.08378, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.FarmButton.UICorner
G2L["13"] = Instance.new("UICorner", G2L["12"]);



-- StarterGui.DivazScript.MainFrame.NavBar.FarmButton.TextLabel
G2L["14"] = Instance.new("TextLabel", G2L["12"]);
G2L["14"]["BorderSizePixel"] = 0;
G2L["14"]["TextSize"] = 14;
G2L["14"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["14"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["14"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["14"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["14"]["BackgroundTransparency"] = 1;
G2L["14"]["Size"] = UDim2.new(0, 122, 0, 35);
G2L["14"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["14"]["Text"] = [[Farming]];
G2L["14"]["Position"] = UDim2.new(0.08271, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.EspButton
G2L["15"] = Instance.new("TextButton", G2L["9"]);
G2L["15"]["BorderSizePixel"] = 0;
G2L["15"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["15"]["TextSize"] = 14;
G2L["15"]["BackgroundColor3"] = Color3.fromRGB(32, 42, 56);
G2L["15"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["15"]["Size"] = UDim2.new(0, 133, 0, 35);
G2L["15"]["BackgroundTransparency"] = 0.01;
G2L["15"]["Name"] = [[EspButton]];
G2L["15"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["15"]["Text"] = [[]];
G2L["15"]["Position"] = UDim2.new(0, 0, 0.08378, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.EspButton.UICorner
G2L["16"] = Instance.new("UICorner", G2L["15"]);



-- StarterGui.DivazScript.MainFrame.NavBar.EspButton.TextLabel
G2L["17"] = Instance.new("TextLabel", G2L["15"]);
G2L["17"]["BorderSizePixel"] = 0;
G2L["17"]["TextSize"] = 14;
G2L["17"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["17"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["17"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["17"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["17"]["BackgroundTransparency"] = 1;
G2L["17"]["Size"] = UDim2.new(0, 122, 0, 35);
G2L["17"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["17"]["Text"] = [[Esp]];
G2L["17"]["Position"] = UDim2.new(0.08271, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.PlayerButton
G2L["18"] = Instance.new("TextButton", G2L["9"]);
G2L["18"]["BorderSizePixel"] = 0;
G2L["18"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["18"]["TextSize"] = 14;
G2L["18"]["BackgroundColor3"] = Color3.fromRGB(32, 42, 56);
G2L["18"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["18"]["Size"] = UDim2.new(0, 133, 0, 35);
G2L["18"]["BackgroundTransparency"] = 0.01;
G2L["18"]["Name"] = [[PlayerButton]];
G2L["18"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["18"]["Text"] = [[]];
G2L["18"]["Position"] = UDim2.new(0, 0, 0.08378, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.PlayerButton.UICorner
G2L["19"] = Instance.new("UICorner", G2L["18"]);



-- StarterGui.DivazScript.MainFrame.NavBar.PlayerButton.TextLabel
G2L["1a"] = Instance.new("TextLabel", G2L["18"]);
G2L["1a"]["BorderSizePixel"] = 0;
G2L["1a"]["TextSize"] = 14;
G2L["1a"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["1a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1a"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["1a"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1a"]["BackgroundTransparency"] = 1;
G2L["1a"]["Size"] = UDim2.new(0, 122, 0, 35);
G2L["1a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1a"]["Text"] = [[Player]];
G2L["1a"]["Position"] = UDim2.new(0.08271, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.MiscButton
G2L["1b"] = Instance.new("TextButton", G2L["9"]);
G2L["1b"]["BorderSizePixel"] = 0;
G2L["1b"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1b"]["TextSize"] = 14;
G2L["1b"]["BackgroundColor3"] = Color3.fromRGB(32, 42, 56);
G2L["1b"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["1b"]["Size"] = UDim2.new(0, 133, 0, 35);
G2L["1b"]["BackgroundTransparency"] = 0.01;
G2L["1b"]["Name"] = [[MiscButton]];
G2L["1b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1b"]["Text"] = [[]];
G2L["1b"]["Position"] = UDim2.new(0, 0, 0.24938, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.MiscButton.UICorner
G2L["1c"] = Instance.new("UICorner", G2L["1b"]);



-- StarterGui.DivazScript.MainFrame.NavBar.MiscButton.TextLabel
G2L["1d"] = Instance.new("TextLabel", G2L["1b"]);
G2L["1d"]["BorderSizePixel"] = 0;
G2L["1d"]["TextSize"] = 14;
G2L["1d"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["1d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1d"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["1d"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1d"]["BackgroundTransparency"] = 1;
G2L["1d"]["Size"] = UDim2.new(0, 122, 0, 35);
G2L["1d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1d"]["Text"] = [[Misc]];
G2L["1d"]["Position"] = UDim2.new(0.08271, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.Frame
G2L["1e"] = Instance.new("Frame", G2L["4"]);
G2L["1e"]["BorderSizePixel"] = 0;
G2L["1e"]["BackgroundColor3"] = Color3.fromRGB(36, 36, 36);
G2L["1e"]["Size"] = UDim2.new(0, 563, 0, 68);
G2L["1e"]["Position"] = UDim2.new(-0.00177, 0, 0.0026, 0);
G2L["1e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1e"]["BackgroundTransparency"] = 1;


-- StarterGui.DivazScript.MainFrame.Frame.LocalScript
G2L["1f"] = Instance.new("LocalScript", G2L["1e"]);



-- StarterGui.DivazScript.MainFrame.Frame.TextLabel
G2L["20"] = Instance.new("TextLabel", G2L["1e"]);
G2L["20"]["TextWrapped"] = true;
G2L["20"]["BorderSizePixel"] = 0;
G2L["20"]["TextSize"] = 35;
G2L["20"]["BackgroundColor3"] = Color3.fromRGB(36, 36, 36);
G2L["20"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["20"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["20"]["BackgroundTransparency"] = 1;
G2L["20"]["Size"] = UDim2.new(0, 295, 0, 43);
G2L["20"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["20"]["Text"] = [[Divaz Script : Wiet Hub]];
G2L["20"]["Position"] = UDim2.new(0.00888, 0, -0.02196, 0);


-- StarterGui.DivazScript.MainFrame.Frame.TextLabel.UICorner
G2L["21"] = Instance.new("UICorner", G2L["20"]);



-- StarterGui.DivazScript.MainFrame.Frame.UICorner
G2L["22"] = Instance.new("UICorner", G2L["1e"]);



-- StarterGui.DivazScript.MainFrame.Frame.RiskLabel
G2L["23"] = Instance.new("TextLabel", G2L["1e"]);
G2L["23"]["TextWrapped"] = true;
G2L["23"]["BorderSizePixel"] = 0;
G2L["23"]["TextSize"] = 20;
G2L["23"]["TextScaled"] = true;
G2L["23"]["BackgroundColor3"] = Color3.fromRGB(36, 36, 36);
G2L["23"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["23"]["TextColor3"] = Color3.fromRGB(171, 0, 0);
G2L["23"]["BackgroundTransparency"] = 1;
G2L["23"]["Size"] = UDim2.new(0, 131, 0, 46);
G2L["23"]["Visible"] = false;
G2L["23"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["23"]["Text"] = [[Script did not update to this version use it at your own risk!]];
G2L["23"]["Name"] = [[RiskLabel]];
G2L["23"]["Position"] = UDim2.new(0.53286, 0, -0.07353, 0);


-- StarterGui.DivazScript.MainFrame.Frame.RiskLabel.UICorner
G2L["24"] = Instance.new("UICorner", G2L["23"]);



-- StarterGui.DivazScript.MainFrame.Frame.VersionLabel
G2L["25"] = Instance.new("TextLabel", G2L["1e"]);
G2L["25"]["TextWrapped"] = true;
G2L["25"]["BorderSizePixel"] = 0;
G2L["25"]["TextSize"] = 20;
G2L["25"]["BackgroundColor3"] = Color3.fromRGB(36, 36, 36);
G2L["25"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["25"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["25"]["BackgroundTransparency"] = 1;
G2L["25"]["Size"] = UDim2.new(0, 160, 0, 22);
G2L["25"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["25"]["Text"] = [[]];
G2L["25"]["Name"] = [[VersionLabel]];
G2L["25"]["Position"] = UDim2.new(0.77442, 0, 0.13235, 0);


-- StarterGui.DivazScript.MainFrame.Frame.VersionLabel.UICorner
G2L["26"] = Instance.new("UICorner", G2L["25"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame
G2L["27"] = Instance.new("ScrollingFrame", G2L["4"]);
G2L["27"]["Visible"] = false;
G2L["27"]["Active"] = true;
G2L["27"]["BorderSizePixel"] = 0;
G2L["27"]["TopImage"] = [[]];
G2L["27"]["MidImage"] = [[]];
G2L["27"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["27"]["Name"] = [[CombatFrame]];
G2L["27"]["BottomImage"] = [[]];
G2L["27"]["Size"] = UDim2.new(0, 415, 0, 509);
G2L["27"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["27"]["Position"] = UDim2.new(0.28501, 0, 0.10435, 0);
G2L["27"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["27"]["BackgroundTransparency"] = 1;


-- StarterGui.DivazScript.MainFrame.CombatFrame.UIPadding
G2L["28"] = Instance.new("UIPadding", G2L["27"]);
G2L["28"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["28"]["PaddingLeft"] = UDim.new(0.01, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.UIListLayout
G2L["29"] = Instance.new("UIListLayout", G2L["27"]);
G2L["29"]["Padding"] = UDim.new(0.007, 0);
G2L["29"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.CombatFrame.AutoFightPerson
G2L["2a"] = Instance.new("TextButton", G2L["27"]);
G2L["2a"]["BorderSizePixel"] = 0;
G2L["2a"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2a"]["TextSize"] = 14;
G2L["2a"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["2a"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["2a"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["2a"]["Name"] = [[AutoFightPerson]];
G2L["2a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2a"]["Text"] = [[]];
G2L["2a"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.AutoFightPerson.UICorner
G2L["2b"] = Instance.new("UICorner", G2L["2a"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.AutoFightPerson.TextLabel
G2L["2c"] = Instance.new("TextLabel", G2L["2a"]);
G2L["2c"]["BorderSizePixel"] = 0;
G2L["2c"]["TextSize"] = 16;
G2L["2c"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["2c"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2c"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["2c"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2c"]["BackgroundTransparency"] = 1;
G2L["2c"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["2c"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2c"]["Text"] = [[Auto Fight With Animations (More Legit)]];
G2L["2c"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.AutoFightPerson.LocalScript
G2L["2d"] = Instance.new("LocalScript", G2L["2a"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.SpamGrabHair
G2L["2e"] = Instance.new("TextButton", G2L["27"]);
G2L["2e"]["BorderSizePixel"] = 0;
G2L["2e"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2e"]["TextSize"] = 14;
G2L["2e"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["2e"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["2e"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["2e"]["Name"] = [[SpamGrabHair]];
G2L["2e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2e"]["Text"] = [[]];
G2L["2e"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.SpamGrabHair.UICorner
G2L["2f"] = Instance.new("UICorner", G2L["2e"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.SpamGrabHair.LocalScript
G2L["30"] = Instance.new("LocalScript", G2L["2e"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.SpamGrabHair.TextLabel
G2L["31"] = Instance.new("TextLabel", G2L["2e"]);
G2L["31"]["BorderSizePixel"] = 0;
G2L["31"]["TextSize"] = 16;
G2L["31"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["31"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["31"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["31"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["31"]["BackgroundTransparency"] = 1;
G2L["31"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["31"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["31"]["Text"] = [[Spam Grab Hair]];
G2L["31"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Heal
G2L["32"] = Instance.new("TextButton", G2L["27"]);
G2L["32"]["BorderSizePixel"] = 0;
G2L["32"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["32"]["TextSize"] = 14;
G2L["32"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["32"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["32"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["32"]["Name"] = [[Heal]];
G2L["32"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["32"]["Text"] = [[]];
G2L["32"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Heal.UICorner
G2L["33"] = Instance.new("UICorner", G2L["32"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Heal.TextLabel
G2L["34"] = Instance.new("TextLabel", G2L["32"]);
G2L["34"]["BorderSizePixel"] = 0;
G2L["34"]["TextSize"] = 15;
G2L["34"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["34"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["34"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["34"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["34"]["BackgroundTransparency"] = 1;
G2L["34"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["34"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["34"]["Text"] = [[Tp To Hospital Bed Under costum health]];
G2L["34"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Heal.LocalScript
G2L["35"] = Instance.new("LocalScript", G2L["32"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Heal.TextBox
G2L["36"] = Instance.new("TextBox", G2L["32"]);
G2L["36"]["CursorPosition"] = -1;
G2L["36"]["BorderSizePixel"] = 0;
G2L["36"]["TextSize"] = 20;
G2L["36"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["36"]["BackgroundColor3"] = Color3.fromRGB(18, 24, 35);
G2L["36"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["36"]["Size"] = UDim2.new(0, 146, 0, 21);
G2L["36"]["Position"] = UDim2.new(0.57683, 0, 0.18182, 0);
G2L["36"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["36"]["Text"] = [[30 HP]];


-- StarterGui.DivazScript.MainFrame.CombatFrame.AutoStomp
G2L["37"] = Instance.new("TextButton", G2L["27"]);
G2L["37"]["BorderSizePixel"] = 0;
G2L["37"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["37"]["TextSize"] = 14;
G2L["37"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["37"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["37"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["37"]["Name"] = [[AutoStomp]];
G2L["37"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["37"]["Text"] = [[]];
G2L["37"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.AutoStomp.UICorner
G2L["38"] = Instance.new("UICorner", G2L["37"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.AutoStomp.TextLabel
G2L["39"] = Instance.new("TextLabel", G2L["37"]);
G2L["39"]["BorderSizePixel"] = 0;
G2L["39"]["TextSize"] = 15;
G2L["39"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["39"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["39"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["39"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["39"]["BackgroundTransparency"] = 1;
G2L["39"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["39"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["39"]["Text"] = [[Auto Stomp]];
G2L["39"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.AutoStomp.LocalScript
G2L["3a"] = Instance.new("LocalScript", G2L["37"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Fling
G2L["3b"] = Instance.new("TextButton", G2L["27"]);
G2L["3b"]["BorderSizePixel"] = 0;
G2L["3b"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3b"]["TextSize"] = 14;
G2L["3b"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["3b"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["3b"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["3b"]["Name"] = [[Fling]];
G2L["3b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3b"]["Text"] = [[]];
G2L["3b"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Fling.UICorner
G2L["3c"] = Instance.new("UICorner", G2L["3b"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Fling.TextLabel
G2L["3d"] = Instance.new("TextLabel", G2L["3b"]);
G2L["3d"]["BorderSizePixel"] = 0;
G2L["3d"]["TextSize"] = 15;
G2L["3d"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["3d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["3d"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["3d"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["3d"]["BackgroundTransparency"] = 1;
G2L["3d"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["3d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3d"]["Text"] = [[Fling]];
G2L["3d"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Fling.LocalScript
G2L["3e"] = Instance.new("LocalScript", G2L["3b"]);



-- StarterGui.DivazScript.MainFrame.EspFrame
G2L["3f"] = Instance.new("ScrollingFrame", G2L["4"]);
G2L["3f"]["Visible"] = false;
G2L["3f"]["Active"] = true;
G2L["3f"]["BorderSizePixel"] = 0;
G2L["3f"]["TopImage"] = [[]];
G2L["3f"]["MidImage"] = [[]];
G2L["3f"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["3f"]["Name"] = [[EspFrame]];
G2L["3f"]["BottomImage"] = [[]];
G2L["3f"]["Size"] = UDim2.new(0, 415, 0, 509);
G2L["3f"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3f"]["Position"] = UDim2.new(0.28501, 0, 0.10435, 0);
G2L["3f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3f"]["BackgroundTransparency"] = 1;


-- StarterGui.DivazScript.MainFrame.EspFrame.UIPadding
G2L["40"] = Instance.new("UIPadding", G2L["3f"]);
G2L["40"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["40"]["PaddingLeft"] = UDim.new(0.01, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.UIListLayout
G2L["41"] = Instance.new("UIListLayout", G2L["3f"]);
G2L["41"]["Padding"] = UDim.new(0.007, 0);
G2L["41"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.EspFrame.LocalScript
G2L["42"] = Instance.new("LocalScript", G2L["3f"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.HealthEsp
G2L["43"] = Instance.new("TextButton", G2L["3f"]);
G2L["43"]["BorderSizePixel"] = 0;
G2L["43"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["43"]["TextSize"] = 14;
G2L["43"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["43"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["43"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["43"]["Name"] = [[HealthEsp]];
G2L["43"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["43"]["Text"] = [[]];
G2L["43"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.HealthEsp.UICorner
G2L["44"] = Instance.new("UICorner", G2L["43"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.HealthEsp.TextLabel
G2L["45"] = Instance.new("TextLabel", G2L["43"]);
G2L["45"]["BorderSizePixel"] = 0;
G2L["45"]["TextSize"] = 16;
G2L["45"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["45"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["45"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["45"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["45"]["BackgroundTransparency"] = 1;
G2L["45"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["45"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["45"]["Text"] = [[Health Esp]];
G2L["45"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.HighLightPlayer
G2L["46"] = Instance.new("TextButton", G2L["3f"]);
G2L["46"]["BorderSizePixel"] = 0;
G2L["46"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["46"]["TextSize"] = 14;
G2L["46"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["46"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["46"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["46"]["Name"] = [[HighLightPlayer]];
G2L["46"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["46"]["Text"] = [[]];
G2L["46"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.HighLightPlayer.UICorner
G2L["47"] = Instance.new("UICorner", G2L["46"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.HighLightPlayer.TextLabel
G2L["48"] = Instance.new("TextLabel", G2L["46"]);
G2L["48"]["BorderSizePixel"] = 0;
G2L["48"]["TextSize"] = 16;
G2L["48"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["48"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["48"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["48"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["48"]["BackgroundTransparency"] = 1;
G2L["48"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["48"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["48"]["Text"] = [[HighLight Esp]];
G2L["48"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.NameEsp
G2L["49"] = Instance.new("TextButton", G2L["3f"]);
G2L["49"]["BorderSizePixel"] = 0;
G2L["49"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["49"]["TextSize"] = 14;
G2L["49"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["49"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["49"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["49"]["Name"] = [[NameEsp]];
G2L["49"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["49"]["Text"] = [[]];
G2L["49"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.NameEsp.UICorner
G2L["4a"] = Instance.new("UICorner", G2L["49"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.NameEsp.TextLabel
G2L["4b"] = Instance.new("TextLabel", G2L["49"]);
G2L["4b"]["BorderSizePixel"] = 0;
G2L["4b"]["TextSize"] = 16;
G2L["4b"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["4b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4b"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["4b"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4b"]["BackgroundTransparency"] = 1;
G2L["4b"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["4b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4b"]["Text"] = [[Name Esp]];
G2L["4b"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.RobberyEsp
G2L["4c"] = Instance.new("TextButton", G2L["3f"]);
G2L["4c"]["BorderSizePixel"] = 0;
G2L["4c"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4c"]["TextSize"] = 14;
G2L["4c"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["4c"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["4c"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["4c"]["Name"] = [[RobberyEsp]];
G2L["4c"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4c"]["Text"] = [[]];
G2L["4c"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.RobberyEsp.UICorner
G2L["4d"] = Instance.new("UICorner", G2L["4c"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.RobberyEsp.TextLabel
G2L["4e"] = Instance.new("TextLabel", G2L["4c"]);
G2L["4e"]["BorderSizePixel"] = 0;
G2L["4e"]["TextSize"] = 16;
G2L["4e"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["4e"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4e"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["4e"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4e"]["BackgroundTransparency"] = 1;
G2L["4e"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["4e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4e"]["Text"] = [[Robbery Esp]];
G2L["4e"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.Tracers
G2L["4f"] = Instance.new("TextButton", G2L["3f"]);
G2L["4f"]["BorderSizePixel"] = 0;
G2L["4f"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4f"]["TextSize"] = 14;
G2L["4f"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["4f"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["4f"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["4f"]["Name"] = [[Tracers]];
G2L["4f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4f"]["Text"] = [[]];
G2L["4f"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.Tracers.UICorner
G2L["50"] = Instance.new("UICorner", G2L["4f"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.Tracers.TextLabel
G2L["51"] = Instance.new("TextLabel", G2L["4f"]);
G2L["51"]["BorderSizePixel"] = 0;
G2L["51"]["TextSize"] = 16;
G2L["51"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["51"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["51"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["51"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["51"]["BackgroundTransparency"] = 1;
G2L["51"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["51"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["51"]["Text"] = [[Tracers]];
G2L["51"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.BuyFrame
G2L["52"] = Instance.new("ScrollingFrame", G2L["4"]);
G2L["52"]["Visible"] = false;
G2L["52"]["Active"] = true;
G2L["52"]["BorderSizePixel"] = 0;
G2L["52"]["TopImage"] = [[]];
G2L["52"]["MidImage"] = [[]];
G2L["52"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["52"]["Name"] = [[BuyFrame]];
G2L["52"]["BottomImage"] = [[]];
G2L["52"]["Size"] = UDim2.new(0, 415, 0, 509);
G2L["52"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["52"]["Position"] = UDim2.new(0.28501, 0, 0.10435, 0);
G2L["52"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["52"]["BackgroundTransparency"] = 1;


-- StarterGui.DivazScript.MainFrame.BuyFrame.List1
G2L["53"] = Instance.new("TextButton", G2L["52"]);
G2L["53"]["BorderSizePixel"] = 0;
G2L["53"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["53"]["TextSize"] = 14;
G2L["53"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["53"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["53"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["53"]["Name"] = [[List1]];
G2L["53"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["53"]["Text"] = [[]];
G2L["53"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.BuyFrame.List1.UICorner
G2L["54"] = Instance.new("UICorner", G2L["53"]);



-- StarterGui.DivazScript.MainFrame.BuyFrame.LocalScript
G2L["55"] = Instance.new("LocalScript", G2L["52"]);



-- StarterGui.DivazScript.MainFrame.BuyFrame.UIPadding
G2L["56"] = Instance.new("UIPadding", G2L["52"]);
G2L["56"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["56"]["PaddingLeft"] = UDim.new(0.01, 0);


-- StarterGui.DivazScript.MainFrame.BuyFrame.UIListLayout
G2L["57"] = Instance.new("UIListLayout", G2L["52"]);
G2L["57"]["Padding"] = UDim.new(0.007, 0);
G2L["57"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.MiscFrame
G2L["58"] = Instance.new("ScrollingFrame", G2L["4"]);
G2L["58"]["Active"] = true;
G2L["58"]["BorderSizePixel"] = 0;
G2L["58"]["TopImage"] = [[]];
G2L["58"]["MidImage"] = [[]];
G2L["58"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["58"]["Name"] = [[MiscFrame]];
G2L["58"]["BottomImage"] = [[]];
G2L["58"]["Size"] = UDim2.new(0, 415, 0, 509);
G2L["58"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["58"]["Position"] = UDim2.new(0.28501, 0, 0.10435, 0);
G2L["58"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["58"]["BackgroundTransparency"] = 1;


-- StarterGui.DivazScript.MainFrame.MiscFrame.UIPadding
G2L["59"] = Instance.new("UIPadding", G2L["58"]);
G2L["59"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["59"]["PaddingLeft"] = UDim.new(0.01, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.UIListLayout
G2L["5a"] = Instance.new("UIListLayout", G2L["58"]);
G2L["5a"]["Padding"] = UDim.new(0.015, 0);
G2L["5a"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.MiscFrame.Fly
G2L["5b"] = Instance.new("TextButton", G2L["58"]);
G2L["5b"]["BorderSizePixel"] = 0;
G2L["5b"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5b"]["TextSize"] = 14;
G2L["5b"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["5b"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["5b"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["5b"]["Name"] = [[Fly]];
G2L["5b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5b"]["Text"] = [[]];
G2L["5b"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.Fly.UICorner
G2L["5c"] = Instance.new("UICorner", G2L["5b"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.Fly.TextLabel
G2L["5d"] = Instance.new("TextLabel", G2L["5b"]);
G2L["5d"]["BorderSizePixel"] = 0;
G2L["5d"]["TextSize"] = 15;
G2L["5d"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["5d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5d"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["5d"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5d"]["BackgroundTransparency"] = 1;
G2L["5d"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["5d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5d"]["Text"] = [[Fly]];
G2L["5d"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.Fly.FlySpeedBox
G2L["5e"] = Instance.new("TextBox", G2L["5b"]);
G2L["5e"]["CursorPosition"] = -1;
G2L["5e"]["Name"] = [[FlySpeedBox]];
G2L["5e"]["BorderSizePixel"] = 0;
G2L["5e"]["TextSize"] = 20;
G2L["5e"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5e"]["BackgroundColor3"] = Color3.fromRGB(18, 24, 35);
G2L["5e"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["5e"]["Size"] = UDim2.new(0, 146, 0, 21);
G2L["5e"]["Position"] = UDim2.new(0.57683, 0, 0.18182, 0);
G2L["5e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5e"]["Text"] = [[speed 50]];


-- StarterGui.DivazScript.MainFrame.MiscFrame.FlyScript
G2L["5f"] = Instance.new("LocalScript", G2L["58"]);
G2L["5f"]["Name"] = [[FlyScript]];


-- StarterGui.DivazScript.MainFrame.FarmingFrame
G2L["60"] = Instance.new("ScrollingFrame", G2L["4"]);
G2L["60"]["Visible"] = false;
G2L["60"]["Active"] = true;
G2L["60"]["BorderSizePixel"] = 0;
G2L["60"]["TopImage"] = [[]];
G2L["60"]["MidImage"] = [[]];
G2L["60"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["60"]["Name"] = [[FarmingFrame]];
G2L["60"]["BottomImage"] = [[]];
G2L["60"]["Size"] = UDim2.new(0, 415, 0, 509);
G2L["60"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["60"]["Position"] = UDim2.new(0.28501, 0, 0.10435, 0);
G2L["60"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["60"]["BackgroundTransparency"] = 1;


-- StarterGui.DivazScript.MainFrame.FarmingFrame.UIPadding
G2L["61"] = Instance.new("UIPadding", G2L["60"]);
G2L["61"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["61"]["PaddingLeft"] = UDim.new(0.01, 0);


-- StarterGui.DivazScript.MainFrame.FarmingFrame.UIListLayout
G2L["62"] = Instance.new("UIListLayout", G2L["60"]);
G2L["62"]["Padding"] = UDim.new(0.007, 0);
G2L["62"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.PlayerFrame
G2L["63"] = Instance.new("ScrollingFrame", G2L["4"]);
G2L["63"]["Visible"] = false;
G2L["63"]["Active"] = true;
G2L["63"]["BorderSizePixel"] = 0;
G2L["63"]["TopImage"] = [[]];
G2L["63"]["MidImage"] = [[]];
G2L["63"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["63"]["Name"] = [[PlayerFrame]];
G2L["63"]["BottomImage"] = [[]];
G2L["63"]["Size"] = UDim2.new(0, 415, 0, 509);
G2L["63"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["63"]["Position"] = UDim2.new(0.28501, 0, 0.10435, 0);
G2L["63"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["63"]["BackgroundTransparency"] = 1;


-- StarterGui.DivazScript.MainFrame.PlayerFrame.PlayerFrame
G2L["64"] = Instance.new("Frame", G2L["63"]);
G2L["64"]["BorderSizePixel"] = 0;
G2L["64"]["BackgroundColor3"] = Color3.fromRGB(28, 32, 43);
G2L["64"]["Size"] = UDim2.new(0, 397, 0, 32);
G2L["64"]["Position"] = UDim2.new(0, 0, 0.04138, 0);
G2L["64"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["64"]["Name"] = [[PlayerFrame]];


-- StarterGui.DivazScript.MainFrame.PlayerFrame.PlayerFrame.UICorner
G2L["65"] = Instance.new("UICorner", G2L["64"]);



-- StarterGui.DivazScript.MainFrame.PlayerFrame.PlayerFrame.UIStroke
G2L["66"] = Instance.new("UIStroke", G2L["64"]);
G2L["66"]["ApplyStrokeMode"] = Enum.ApplyStrokeMode.Border;
G2L["66"]["Color"] = Color3.fromRGB(0, 171, 255);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.PlayerFrame.PlayerButton
G2L["67"] = Instance.new("TextButton", G2L["64"]);
G2L["67"]["BorderSizePixel"] = 0;
G2L["67"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["67"]["TextSize"] = 14;
G2L["67"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["67"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["67"]["Size"] = UDim2.new(0, 397, 0, 30);
G2L["67"]["BackgroundTransparency"] = 0.95;
G2L["67"]["Name"] = [[PlayerButton]];
G2L["67"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["67"]["Text"] = [[Click here for player list]];
G2L["67"]["Position"] = UDim2.new(-0.03116, 0, -0.03367, 0);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.PlayerFrame.UIPadding
G2L["68"] = Instance.new("UIPadding", G2L["64"]);
G2L["68"]["PaddingTop"] = UDim.new(0.01, 0);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.PlayerFrame.UIListLayout
G2L["69"] = Instance.new("UIListLayout", G2L["64"]);
G2L["69"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.PlayerFrame.LocalScript
G2L["6a"] = Instance.new("LocalScript", G2L["63"]);



-- StarterGui.DivazScript.MainFrame.PlayerFrame.UIPadding
G2L["6b"] = Instance.new("UIPadding", G2L["63"]);
G2L["6b"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["6b"]["PaddingLeft"] = UDim.new(0.01, 0);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.UIListLayout
G2L["6c"] = Instance.new("UIListLayout", G2L["63"]);
G2L["6c"]["Padding"] = UDim.new(0.007, 0);
G2L["6c"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.PlayerFrame.SpectateButton
G2L["6d"] = Instance.new("TextButton", G2L["63"]);
G2L["6d"]["BorderSizePixel"] = 0;
G2L["6d"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6d"]["TextSize"] = 14;
G2L["6d"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["6d"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["6d"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["6d"]["Name"] = [[SpectateButton]];
G2L["6d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6d"]["Text"] = [[]];
G2L["6d"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.SpectateButton.UICorner
G2L["6e"] = Instance.new("UICorner", G2L["6d"]);



-- StarterGui.DivazScript.MainFrame.PlayerFrame.SpectateButton.TextLabel
G2L["6f"] = Instance.new("TextLabel", G2L["6d"]);
G2L["6f"]["BorderSizePixel"] = 0;
G2L["6f"]["TextSize"] = 16;
G2L["6f"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["6f"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["6f"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["6f"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["6f"]["BackgroundTransparency"] = 1;
G2L["6f"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["6f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6f"]["Text"] = [[Spectate Person]];
G2L["6f"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.GrabPlayerToVoidButton
G2L["70"] = Instance.new("TextButton", G2L["63"]);
G2L["70"]["BorderSizePixel"] = 0;
G2L["70"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["70"]["TextSize"] = 14;
G2L["70"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["70"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["70"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["70"]["Name"] = [[GrabPlayerToVoidButton]];
G2L["70"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["70"]["Text"] = [[]];
G2L["70"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.GrabPlayerToVoidButton.UICorner
G2L["71"] = Instance.new("UICorner", G2L["70"]);



-- StarterGui.DivazScript.MainFrame.PlayerFrame.GrabPlayerToVoidButton.TextLabel
G2L["72"] = Instance.new("TextLabel", G2L["70"]);
G2L["72"]["BorderSizePixel"] = 0;
G2L["72"]["TextSize"] = 16;
G2L["72"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["72"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["72"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["72"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["72"]["BackgroundTransparency"] = 1;
G2L["72"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["72"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["72"]["Text"] = [[Grab User To Void]];
G2L["72"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.KillUserButton
G2L["73"] = Instance.new("TextButton", G2L["63"]);
G2L["73"]["BorderSizePixel"] = 0;
G2L["73"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["73"]["TextSize"] = 14;
G2L["73"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["73"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["73"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["73"]["Name"] = [[KillUserButton]];
G2L["73"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["73"]["Text"] = [[]];
G2L["73"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.KillUserButton.UICorner
G2L["74"] = Instance.new("UICorner", G2L["73"]);



-- StarterGui.DivazScript.MainFrame.PlayerFrame.KillUserButton.TextLabel
G2L["75"] = Instance.new("TextLabel", G2L["73"]);
G2L["75"]["BorderSizePixel"] = 0;
G2L["75"]["TextSize"] = 16;
G2L["75"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["75"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["75"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["75"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["75"]["BackgroundTransparency"] = 1;
G2L["75"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["75"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["75"]["Text"] = [[Kill User]];
G2L["75"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.TaserPersonButton
G2L["76"] = Instance.new("TextButton", G2L["63"]);
G2L["76"]["BorderSizePixel"] = 0;
G2L["76"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["76"]["TextSize"] = 14;
G2L["76"]["BackgroundColor3"] = Color3.fromRGB(31, 41, 61);
G2L["76"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["76"]["Size"] = UDim2.new(0, 397, 0, 33);
G2L["76"]["Name"] = [[TaserPersonButton]];
G2L["76"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["76"]["Text"] = [[]];
G2L["76"]["Position"] = UDim2.new(0, 0, 0.00363, 0);


-- StarterGui.DivazScript.MainFrame.PlayerFrame.TaserPersonButton.UICorner
G2L["77"] = Instance.new("UICorner", G2L["76"]);



-- StarterGui.DivazScript.MainFrame.PlayerFrame.TaserPersonButton.TextLabel
G2L["78"] = Instance.new("TextLabel", G2L["76"]);
G2L["78"]["BorderSizePixel"] = 0;
G2L["78"]["TextSize"] = 16;
G2L["78"]["TextXAlignment"] = Enum.TextXAlignment.Left;
G2L["78"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["78"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["78"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["78"]["BackgroundTransparency"] = 1;
G2L["78"]["Size"] = UDim2.new(0, 385, 0, 33);
G2L["78"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["78"]["Text"] = [[Taser Person]];
G2L["78"]["Position"] = UDim2.new(0.03023, 0, 0, 0);


-- StarterGui.DivazScript.UIScale
G2L["79"] = Instance.new("UIScale", G2L["1"]);



-- StarterGui.DivazScript.GUI
local function C_2()
local script = G2L["2"];
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
	
end;
task.spawn(C_2);
-- StarterGui.DivazScript.Reset
local function C_3()
local script = G2L["3"];
	local UserInputService = game:GetService("UserInputService")
	local Players = game:GetService("Players")
	local ReplicatedStorage = game:GetService("ReplicatedStorage")
	
	local screenGui = script.Parent
	
	if UserInputService.TouchEnabled and not UserInputService.KeyboardEnabled then
		local uiScale = Instance.new("UIScale")
		uiScale.Scale = 0.5
		uiScale.Parent = screenGui
	end
	
	task.wait(3)
	
	local player = Players.LocalPlayer
	
	if player.Character then
		local humanoid = player.Character:FindFirstChild("Humanoid")
	
		if humanoid then
			humanoid.Health = 0
		else
			player.Character:BreakJoints()
		end
	end
end;
task.spawn(C_3);
-- StarterGui.DivazScript.MainFrame.Frame.LocalScript
local function C_1f()
local script = G2L["1f"];
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
end;
task.spawn(C_1f);
-- StarterGui.DivazScript.MainFrame.CombatFrame.AutoFightPerson.LocalScript
local function C_2d()
local script = G2L["2d"];
	local Players = game:GetService("Players")
	local ReplicatedStorage = game:GetService("ReplicatedStorage")
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
	uiStroke.Color = Color3.fromRGB(255,255,255)
	uiStroke.Thickness = 0.6
	
	local running = false
	local loopThread
	local animThread
	
	local animations = {
		"rbxassetid://75332407354705",
		"rbxassetid://76480324709296",
		"rbxassetid://106511372666199",
		"rbxassetid://127565089612215",
		"rbxassetid://119803685959923"
	}
	
	local function spamHit()
		local args = {
			{
				Event = "Hit",
				ClientHitbox = {}
			}
		}
		ReplicatedStorage:WaitForChild("Event"):FireServer(unpack(args))
	end
	
	local function getCharacter()
		return LocalPlayer.Character
	end
	
	local function getHumanoid(char)
		return char and char:FindFirstChildOfClass("Humanoid")
	end
	
	local function isFistEquipped()
		local char = getCharacter()
		if not char then return false end
	
		local tool = char:FindFirstChildOfClass("Tool")
		if tool and tool.Name == "Fist" then
			return true
		end
	
		return false
	end
	
	local function playRandomAnimation()
		local char = getCharacter()
		local hum = getHumanoid(char)
	
		if not hum then return end
	
		local randomAnimId = animations[math.random(1, #animations)]
	
		local anim = Instance.new("Animation")
		anim.AnimationId = randomAnimId
	
		local track = hum:LoadAnimation(anim)
		track:Play()
	
		task.delay(track.Length, function()
			if track.IsPlaying then
				track:Stop()
			end
		end)
	end
	
	local function start()
		if running then
			return
		end
	
		running = true
		uiStroke.Color = Color3.fromRGB(0,255,0)
	
		loopThread = task.spawn(function()
			while running do
				pcall(spamHit)
				task.wait(0.15)
			end
		end)
	
		animThread = task.spawn(function()
			while running do
				if isFistEquipped() then
					playRandomAnimation()
					task.wait(math.random(0.5, 1))
				else
					task.wait(0.01)
				end
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
	
		if animThread then
			task.cancel(animThread)
			animThread = nil
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
	
	LocalPlayer.CharacterAdded:Connect(function()
		if running then
			stop()
			task.wait(1)
			start()
		end
	end)
end;
task.spawn(C_2d);
-- StarterGui.DivazScript.MainFrame.CombatFrame.SpamGrabHair.LocalScript
local function C_30()
local script = G2L["30"];
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
	uiStroke.Thickness = 0.6
	
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
end;
task.spawn(C_30);
-- StarterGui.DivazScript.MainFrame.CombatFrame.Heal.LocalScript
local function C_35()
local script = G2L["35"];
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
	uiStroke.Thickness = 0.6
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
end;
task.spawn(C_35);
-- StarterGui.DivazScript.MainFrame.CombatFrame.AutoStomp.LocalScript
local function C_3a()
local script = G2L["3a"];
	local Players = game:GetService("Players")
	local ReplicatedStorage = game:GetService("ReplicatedStorage")
	local RunService = game:GetService("RunService")
	
	local LocalPlayer = Players.LocalPlayer
	local button = script.Parent
	
	local oldStroke = button:FindFirstChild("UIStroke")
	if oldStroke then oldStroke:Destroy() end
	
	local uiStroke = Instance.new("UIStroke")
	uiStroke.Parent = button
	uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	uiStroke.Transparency = 0
	uiStroke.Thickness = 0.6
	uiStroke.Color = Color3.fromRGB(255, 255, 255)
	
	local scriptEnabled = false
	local stompLoop = nil
	
	local Remote = ReplicatedStorage:WaitForChild("Event")
	
	local function fireStomp()
		Remote:FireServer({
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
end;
task.spawn(C_3a);
-- StarterGui.DivazScript.MainFrame.CombatFrame.Fling.LocalScript
local function C_3e()
local script = G2L["3e"];
	local Players = game:GetService("Players")
	local ReplicatedStorage = game:GetService("ReplicatedStorage")
	local RunService = game:GetService("RunService")
	local button = script.Parent
	local LocalPlayer = Players.LocalPlayer
	
	local uiStroke = button:FindFirstChildOfClass("UIStroke")
	
	if not uiStroke then
		uiStroke = Instance.new("UIStroke")
		uiStroke.Parent = button
	end
	
	uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	uiStroke.Color = Color3.fromRGB(255,255,255)
	uiStroke.Thickness = 0.6
	uiStroke.Transparency = 0
	uiStroke.Enabled = true
	
	local flingEnabled = false
	local flingThread
	
	local function flingLoop()
		local lp = LocalPlayer
		local c, hrp, vel, movel = nil, nil, nil, 0.1
		while flingEnabled do
			RunService.Heartbeat:Wait()
			c = lp.Character
			hrp = c and c:FindFirstChild("HumanoidRootPart")
			if hrp then
				vel = hrp.Velocity
				hrp.Velocity = vel * 250 + Vector3.new(0, 250, 0)
				RunService.RenderStepped:Wait()
				hrp.Velocity = vel
				RunService.Stepped:Wait()
				hrp.Velocity = vel + Vector3.new(0, movel, 0)
				movel = -movel
			end
		end
	end
	
	button.MouseButton1Click:Connect(function()
		flingEnabled = not flingEnabled
		uiStroke.Color = flingEnabled and Color3.fromRGB(0,255,0) or Color3.fromRGB(255,255,255)
		if flingEnabled then
			flingThread = task.spawn(flingLoop)
		end
	end)
	
end;
task.spawn(C_3e);
-- StarterGui.DivazScript.MainFrame.EspFrame.LocalScript
local function C_42()
local script = G2L["42"];
	local Players = game:GetService("Players")
	local LocalPlayer = Players.LocalPlayer
	local RunService = game:GetService("RunService")
	local Workspace = game:GetService("Workspace")
	
	local buttonNames = {
		"ItemEsp",
		"HighLightPlayer",
		"NameEsp",
		"HealthEsp",
		"RobberyEsp",
		"Tracers"
	}
	
	local buttons = {}
	local espToggles = {}
	
	local highlights = {}
	local healthTags = {}
	local nameTags = {}
	
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
			if player ~= LocalPlayer and player.Character then
				local team = player.Team
				local teamColor = team and team.TeamColor
	
				local highlight = Instance.new("Highlight")
				highlight.Name = "PlayerHighlight"
				highlight.Parent = player.Character
	
				if teamColor then
					highlight.FillColor = teamColor.Color
					highlight.OutlineColor = teamColor.Color
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
			updateHighlightPlayer()
			updateNameEsp()
			updateHealthEsp()
			updateRobberyESP()
			updateItemESP()
			updateTracers()
			lastUpdate = currentTime
		end
	end)
	
	Players.PlayerRemoving:Connect(function(player)
		if nameTags[player] then
			nameTags[player]:Destroy()
			nameTags[player] = nil
		end
	
		if healthTags[player] then
			healthTags[player]:Destroy()
			healthTags[player] = nil
		end
	end)
end;
task.spawn(C_42);
-- StarterGui.DivazScript.MainFrame.BuyFrame.LocalScript
local function C_55()
local script = G2L["55"];
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
	
end;
task.spawn(C_55);
-- StarterGui.DivazScript.MainFrame.MiscFrame.FlyScript
local function C_5f()
local script = G2L["5f"];
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
	uiStroke.Thickness = 0.6
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
end;
task.spawn(C_5f);
-- StarterGui.DivazScript.MainFrame.PlayerFrame.LocalScript
local function C_6a()
local script = G2L["6a"];
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
	
	-- State
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
	
	local function notify(title, text, duration)
		pcall(function()
			StarterGui:SetCore("SendNotification", {
				Title = title,
				Text = text,
				Duration = duration or 3
			})
		end)
	end
	
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
	
	-- Player list functions
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
	
	local function fireHit(targetChar)
		Remote:FireServer({
			Event = "Hit",
			ClientHitbox = { targetChar }
		})
	end
	
	local function fireSnatch(targetChar)
		Remote:FireServer({
			Event = "Snatch",
			ClientHitbox = { targetChar }
		})
	end
	
	local function fireStomp()
		Remote:FireServer({
			Event = "Stomp"
		})
	end
	
	local function fireTaser(targetChar)
		local targetHRP = targetChar and targetChar:FindFirstChild("HumanoidRootPart")
		if not targetHRP then return end
	
		Remote:FireServer({
			ClientHitbox = {},
			Event = "HitSpecialWeapon",
			MousePos = targetHRP.Position
		})
	end
	
	local function fireGrab(targetChar)
		local args = {
			{
				Event = "Grab",
				ClientHitbox = { targetChar }
			}
		}
		Remote:FireServer(unpack(args))
	end
	
	-- Kill logic
	local function startKill()
		if killRunning then return end
	
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
				if not lockedPlayer or not Players:FindFirstChild(lockedPlayer.Name) then
					break
				end
	
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
						fireSnatch(targetChar)
	
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
			if targetChar then
				fireTaser(targetChar)
			end
	
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
		if killRunning then
			stopKill()
		else
			startKill()
		end
	end)
	
	SpectateButton.MouseButton1Click:Connect(function()
		if spectateRunning then
			stopSpectate()
		else
			startSpectate()
		end
	end)
	
	TaserPersonButton.MouseButton1Click:Connect(function()
		if taserRunning then
			stopTaser()
		else
			startTaser()
		end
	end)
	
	GrabPlayerToVoidButton.MouseButton1Click:Connect(function()
		if grabRunning then
			stopGrabToVoid()
		else
			startGrabToVoid()
		end
	end)
	
	Players.PlayerAdded:Connect(function()
		if listOpen then
			buildList()
		end
	end)
	
	Players.PlayerRemoving:Connect(function(plr)
		if selectedPlayer == plr then
			selectedPlayer = nil
			PlayerButton.Text = "Click here for player list"
		end
	
		if listOpen then
			buildList()
		end
	end)
	
	LocalPlayer.CharacterAdded:Connect(function()
		if killRunning then
			task.wait(1)
			equipFist()
		end
	end)
end;
task.spawn(C_6a);

return G2L["1"], require;
