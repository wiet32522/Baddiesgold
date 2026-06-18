--[=[
 d888b  db    db d888888b      .d888b.      db      db    db  .d8b.  
88' Y8b 88    88   `88'        VP  `8D      88      88    88 d8' `8b 
88      88    88    88            odD'      88      88    88 88ooo88 
88  ooo 88    88    88          .88'        88      88    88 88~~~88 
88. ~8~ 88b  d88   .88.        j88.         88booo. 88b  d88 88   88    @uniquadev
 Y888P  ~Y8888P' Y888888P      888888D      Y88888P ~Y8888P' YP   YP  CONVERTER 
]=]

-- Instances: 118 | Scripts: 23 | Modules: 0 | Tags: 0
local G2L = {};

-- StarterGui.DivazScript
G2L["1"] = Instance.new("ScreenGui", game:GetService("Players").LocalPlayer:WaitForChild("PlayerGui"));
G2L["1"]["IgnoreGuiInset"] = true;
G2L["1"]["Enabled"] = false;
G2L["1"]["ScreenInsets"] = Enum.ScreenInsets.None;
G2L["1"]["Name"] = [[DivazScript]];
G2L["1"]["ZIndexBehavior"] = Enum.ZIndexBehavior.Sibling;
G2L["1"]["ResetOnSpawn"] = false;


-- StarterGui.DivazScript.GUI
G2L["2"] = Instance.new("LocalScript", G2L["1"]);
G2L["2"]["Name"] = [[GUI]];


-- StarterGui.DivazScript.Webhook
G2L["3"] = Instance.new("LocalScript", G2L["1"]);
G2L["3"]["Name"] = [[Webhook]];


-- StarterGui.DivazScript.Reset
G2L["4"] = Instance.new("LocalScript", G2L["1"]);
G2L["4"]["Name"] = [[Reset]];


-- StarterGui.DivazScript.MainFrame
G2L["5"] = Instance.new("Frame", G2L["1"]);
G2L["5"]["BorderSizePixel"] = 0;
G2L["5"]["BackgroundColor3"] = Color3.fromRGB(55, 55, 55);
G2L["5"]["Size"] = UDim2.new(0, 564, 0, 385);
G2L["5"]["Position"] = UDim2.new(0.28105, 0, 0.12026, 0);
G2L["5"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5"]["Name"] = [[MainFrame]];


-- StarterGui.DivazScript.MainFrame.NavBar
G2L["6"] = Instance.new("Frame", G2L["5"]);
G2L["6"]["BorderSizePixel"] = 0;
G2L["6"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["6"]["Size"] = UDim2.new(0, 199, 0, 385);
G2L["6"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6"]["Name"] = [[NavBar]];
G2L["6"]["BackgroundTransparency"] = 1;


-- StarterGui.DivazScript.MainFrame.NavBar.MiscButton
G2L["7"] = Instance.new("TextButton", G2L["6"]);
G2L["7"]["BorderSizePixel"] = 0;
G2L["7"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["7"]["TextSize"] = 35;
G2L["7"]["BackgroundColor3"] = Color3.fromRGB(46, 46, 46);
G2L["7"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["7"]["Size"] = UDim2.new(0, 143, 0, 43);
G2L["7"]["Name"] = [[MiscButton]];
G2L["7"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["7"]["Text"] = [[Misc]];
G2L["7"]["Position"] = UDim2.new(0.00619, 0, 0.64419, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.FarmButton
G2L["8"] = Instance.new("TextButton", G2L["6"]);
G2L["8"]["BorderSizePixel"] = 0;
G2L["8"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["8"]["TextSize"] = 35;
G2L["8"]["BackgroundColor3"] = Color3.fromRGB(46, 46, 46);
G2L["8"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["8"]["Size"] = UDim2.new(0, 144, 0, 42);
G2L["8"]["Name"] = [[FarmButton]];
G2L["8"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["8"]["Text"] = [[Farms]];
G2L["8"]["Position"] = UDim2.new(-0.00038, 0, 0.17662, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.EspButton
G2L["9"] = Instance.new("TextButton", G2L["6"]);
G2L["9"]["BorderSizePixel"] = 0;
G2L["9"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["9"]["TextSize"] = 35;
G2L["9"]["BackgroundColor3"] = Color3.fromRGB(46, 46, 46);
G2L["9"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["9"]["Size"] = UDim2.new(0, 143, 0, 47);
G2L["9"]["Name"] = [[EspButton]];
G2L["9"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["9"]["Text"] = [[Visuals]];
G2L["9"]["Position"] = UDim2.new(0.00957, 0, 0.41042, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.CombatButton
G2L["a"] = Instance.new("TextButton", G2L["6"]);
G2L["a"]["BorderSizePixel"] = 0;
G2L["a"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["a"]["TextSize"] = 35;
G2L["a"]["BackgroundColor3"] = Color3.fromRGB(46, 46, 46);
G2L["a"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["a"]["Size"] = UDim2.new(0, 143, 0, 49);
G2L["a"]["Name"] = [[CombatButton]];
G2L["a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["a"]["Text"] = [[Combat]];
G2L["a"]["Position"] = UDim2.new(0.00957, 0, 0.28508, 0);


-- StarterGui.DivazScript.MainFrame.NavBar.BuyButton
G2L["b"] = Instance.new("TextButton", G2L["6"]);
G2L["b"]["BorderSizePixel"] = 0;
G2L["b"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["b"]["TextSize"] = 35;
G2L["b"]["BackgroundColor3"] = Color3.fromRGB(46, 46, 46);
G2L["b"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["b"]["Size"] = UDim2.new(0, 143, 0, 43);
G2L["b"]["Name"] = [[BuyButton]];
G2L["b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b"]["Text"] = [[Buy]];
G2L["b"]["Position"] = UDim2.new(0.00619, 0, 0.5325, 0);


-- StarterGui.DivazScript.MainFrame.Frame
G2L["c"] = Instance.new("Frame", G2L["5"]);
G2L["c"]["BorderSizePixel"] = 0;
G2L["c"]["BackgroundColor3"] = Color3.fromRGB(36, 36, 36);
G2L["c"]["Size"] = UDim2.new(0, 563, 0, 68);
G2L["c"]["Position"] = UDim2.new(-0.00177, 0, 0.0026, 0);
G2L["c"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);


-- StarterGui.DivazScript.MainFrame.Frame.LocalScript
G2L["d"] = Instance.new("LocalScript", G2L["c"]);



-- StarterGui.DivazScript.MainFrame.Frame.TextLabel
G2L["e"] = Instance.new("TextLabel", G2L["c"]);
G2L["e"]["TextWrapped"] = true;
G2L["e"]["BorderSizePixel"] = 0;
G2L["e"]["TextSize"] = 35;
G2L["e"]["BackgroundColor3"] = Color3.fromRGB(36, 36, 36);
G2L["e"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["e"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e"]["Size"] = UDim2.new(0, 355, 0, 68);
G2L["e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["e"]["Text"] = [[Divaz Script : Wiet Hub]];
G2L["e"]["Position"] = UDim2.new(0.01599, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.Frame.TextLabel.UICorner
G2L["f"] = Instance.new("UICorner", G2L["e"]);



-- StarterGui.DivazScript.MainFrame.Frame.Frame
G2L["10"] = Instance.new("Frame", G2L["c"]);
G2L["10"]["BorderSizePixel"] = 0;
G2L["10"]["BackgroundColor3"] = Color3.fromRGB(36, 36, 36);
G2L["10"]["Size"] = UDim2.new(0, 23, 0, -322);
G2L["10"]["Position"] = UDim2.new(0.23979, 0, 5.64706, 0);
G2L["10"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);


-- StarterGui.DivazScript.MainFrame.Frame.Frame
G2L["11"] = Instance.new("Frame", G2L["c"]);
G2L["11"]["BorderSizePixel"] = 0;
G2L["11"]["BackgroundColor3"] = Color3.fromRGB(55, 55, 55);
G2L["11"]["Size"] = UDim2.new(0, 365, 0, 1);
G2L["11"]["Position"] = UDim2.new(0.35346, 0, 1, 0);
G2L["11"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);


-- StarterGui.DivazScript.MainFrame.Frame.UICorner
G2L["12"] = Instance.new("UICorner", G2L["c"]);



-- StarterGui.DivazScript.MainFrame.Frame.VersionLabel
G2L["13"] = Instance.new("TextLabel", G2L["c"]);
G2L["13"]["TextWrapped"] = true;
G2L["13"]["BorderSizePixel"] = 0;
G2L["13"]["TextSize"] = 20;
G2L["13"]["BackgroundColor3"] = Color3.fromRGB(36, 36, 36);
G2L["13"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["13"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["13"]["Size"] = UDim2.new(0, 200, 0, 22);
G2L["13"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["13"]["Text"] = [[]];
G2L["13"]["Name"] = [[VersionLabel]];
G2L["13"]["Position"] = UDim2.new(0.64476, 0, 0, 0);


-- StarterGui.DivazScript.MainFrame.Frame.VersionLabel.UICorner
G2L["14"] = Instance.new("UICorner", G2L["13"]);



-- StarterGui.DivazScript.MainFrame.Frame.RiskLabel
G2L["15"] = Instance.new("TextLabel", G2L["c"]);
G2L["15"]["TextWrapped"] = true;
G2L["15"]["BorderSizePixel"] = 0;
G2L["15"]["TextSize"] = 20;
G2L["15"]["TextScaled"] = true;
G2L["15"]["BackgroundColor3"] = Color3.fromRGB(36, 36, 36);
G2L["15"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["15"]["TextColor3"] = Color3.fromRGB(171, 0, 0);
G2L["15"]["Size"] = UDim2.new(0, 200, 0, 46);
G2L["15"]["Visible"] = false;
G2L["15"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["15"]["Text"] = [[Script did not update to this version use it at your own risk!]];
G2L["15"]["Name"] = [[RiskLabel]];
G2L["15"]["Position"] = UDim2.new(0.64654, 0, 0.32353, 0);


-- StarterGui.DivazScript.MainFrame.Frame.RiskLabel.UICorner
G2L["16"] = Instance.new("UICorner", G2L["15"]);



-- StarterGui.DivazScript.MainFrame.UICorner
G2L["17"] = Instance.new("UICorner", G2L["5"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame
G2L["18"] = Instance.new("ScrollingFrame", G2L["5"]);
G2L["18"]["Active"] = true;
G2L["18"]["BorderSizePixel"] = 0;
G2L["18"]["BackgroundColor3"] = Color3.fromRGB(55, 55, 55);
G2L["18"]["Name"] = [[CombatFrame]];
G2L["18"]["Size"] = UDim2.new(0, 405, 0, 314);
G2L["18"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["18"]["Position"] = UDim2.new(0.28014, 0, 0.17922, 0);
G2L["18"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.UICorner
G2L["19"] = Instance.new("UICorner", G2L["18"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.UIListLayout
G2L["1a"] = Instance.new("UIListLayout", G2L["18"]);
G2L["1a"]["Padding"] = UDim.new(0.015, 0);
G2L["1a"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.CombatFrame.UIPadding
G2L["1b"] = Instance.new("UIPadding", G2L["18"]);
G2L["1b"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["1b"]["PaddingLeft"] = UDim.new(0.03, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.TargetUser
G2L["1c"] = Instance.new("TextButton", G2L["18"]);
G2L["1c"]["BorderSizePixel"] = 0;
G2L["1c"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["1c"]["AutoLocalize"] = false;
G2L["1c"]["TextSize"] = 35;
G2L["1c"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["1c"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["1c"]["Selectable"] = false;
G2L["1c"]["Size"] = UDim2.new(0, 208, 0, 29);
G2L["1c"]["Name"] = [[TargetUser]];
G2L["1c"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1c"]["Text"] = [[Target User]];
G2L["1c"]["Position"] = UDim2.new(0, 0, 0.1114, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.TargetUser.LocalScript
G2L["1d"] = Instance.new("LocalScript", G2L["1c"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.TargetUser.UICorner
G2L["1e"] = Instance.new("UICorner", G2L["1c"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.TargetUser.UserBox
G2L["1f"] = Instance.new("TextBox", G2L["1c"]);
G2L["1f"]["Name"] = [[UserBox]];
G2L["1f"]["PlaceholderColor3"] = Color3.fromRGB(179, 179, 179);
G2L["1f"]["BorderSizePixel"] = 0;
G2L["1f"]["TextSize"] = 25;
G2L["1f"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["1f"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["1f"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["1f"]["ClearTextOnFocus"] = false;
G2L["1f"]["Size"] = UDim2.new(0, 145, 0, 29);
G2L["1f"]["Position"] = UDim2.new(1.05187, 0, 0, 0);
G2L["1f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1f"]["Text"] = [[UserName]];


-- StarterGui.DivazScript.MainFrame.CombatFrame.TargetUser.UserBox.UICorner
G2L["20"] = Instance.new("UICorner", G2L["1f"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto heal
G2L["21"] = Instance.new("TextButton", G2L["18"]);
G2L["21"]["BorderSizePixel"] = 0;
G2L["21"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["21"]["AutoLocalize"] = false;
G2L["21"]["TextSize"] = 35;
G2L["21"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["21"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["21"]["Selectable"] = false;
G2L["21"]["Size"] = UDim2.new(0, 364, 0, 29);
G2L["21"]["Name"] = [[Auto heal]];
G2L["21"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["21"]["Text"] = [[Auto heal on hopistal bed]];
G2L["21"]["Position"] = UDim2.new(-0.00509, 0, 0.21946, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto heal.LocalScript
G2L["22"] = Instance.new("LocalScript", G2L["21"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto heal.UICorner
G2L["23"] = Instance.new("UICorner", G2L["21"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto eat
G2L["24"] = Instance.new("TextButton", G2L["18"]);
G2L["24"]["TextWrapped"] = true;
G2L["24"]["BorderSizePixel"] = 0;
G2L["24"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["24"]["AutoLocalize"] = false;
G2L["24"]["TextSize"] = 35;
G2L["24"]["TextScaled"] = true;
G2L["24"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["24"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["24"]["Selectable"] = false;
G2L["24"]["Size"] = UDim2.new(0, 364, 0, 29);
G2L["24"]["Name"] = [[Auto eat]];
G2L["24"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["24"]["Text"] = [[Auto eat - Keybind H]];
G2L["24"]["Position"] = UDim2.new(-0.00509, 0, 0.21946, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto eat.LocalScript
G2L["25"] = Instance.new("LocalScript", G2L["24"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto eat.UICorner
G2L["26"] = Instance.new("UICorner", G2L["24"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto Fight
G2L["27"] = Instance.new("TextButton", G2L["18"]);
G2L["27"]["BorderSizePixel"] = 0;
G2L["27"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["27"]["AutoLocalize"] = false;
G2L["27"]["TextSize"] = 35;
G2L["27"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["27"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["27"]["Selectable"] = false;
G2L["27"]["Size"] = UDim2.new(0, 364, 0, 29);
G2L["27"]["Name"] = [[Auto Fight]];
G2L["27"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["27"]["Text"] = [[Auto fight keybind N]];
G2L["27"]["Position"] = UDim2.new(-0.00509, 0, 0.21946, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto Fight.LocalScript
G2L["28"] = Instance.new("LocalScript", G2L["27"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto Fight.UICorner
G2L["29"] = Instance.new("UICorner", G2L["27"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Fling
G2L["2a"] = Instance.new("TextButton", G2L["18"]);
G2L["2a"]["BorderSizePixel"] = 0;
G2L["2a"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["2a"]["TextSize"] = 35;
G2L["2a"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["2a"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["2a"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["2a"]["Name"] = [[Fling]];
G2L["2a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2a"]["Text"] = [[Fling - Use at your own RISK]];
G2L["2a"]["Position"] = UDim2.new(0.02217, 0, 0.02416, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Fling.LocalScript
G2L["2b"] = Instance.new("LocalScript", G2L["2a"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Fling.UICorner
G2L["2c"] = Instance.new("UICorner", G2L["2a"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Spam grab hair
G2L["2d"] = Instance.new("TextButton", G2L["18"]);
G2L["2d"]["BorderSizePixel"] = 0;
G2L["2d"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["2d"]["AutoLocalize"] = false;
G2L["2d"]["TextSize"] = 35;
G2L["2d"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["2d"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["2d"]["Selectable"] = false;
G2L["2d"]["Size"] = UDim2.new(0, 364, 0, 29);
G2L["2d"]["Name"] = [[Spam grab hair]];
G2L["2d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2d"]["Text"] = [[Spam grab hair]];
G2L["2d"]["Position"] = UDim2.new(-0.00509, 0, 0.21946, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Spam grab hair.LocalScript
G2L["2e"] = Instance.new("LocalScript", G2L["2d"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Spam grab hair.UICorner
G2L["2f"] = Instance.new("UICorner", G2L["2d"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Grab Player to void
G2L["30"] = Instance.new("TextButton", G2L["18"]);
G2L["30"]["TextWrapped"] = true;
G2L["30"]["BorderSizePixel"] = 0;
G2L["30"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["30"]["AutoLocalize"] = false;
G2L["30"]["TextSize"] = 35;
G2L["30"]["TextScaled"] = true;
G2L["30"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["30"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["30"]["Selectable"] = false;
G2L["30"]["Size"] = UDim2.new(0, 208, 0, 29);
G2L["30"]["Name"] = [[Grab Player to void]];
G2L["30"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["30"]["Text"] = [[Grab Player to void]];
G2L["30"]["Position"] = UDim2.new(0, 0, 0.1114, 0);


-- StarterGui.DivazScript.MainFrame.CombatFrame.Grab Player to void.LocalScript
G2L["31"] = Instance.new("LocalScript", G2L["30"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Grab Player to void.UICorner
G2L["32"] = Instance.new("UICorner", G2L["30"]);



-- StarterGui.DivazScript.MainFrame.CombatFrame.Grab Player to void.UserBox
G2L["33"] = Instance.new("TextBox", G2L["30"]);
G2L["33"]["Name"] = [[UserBox]];
G2L["33"]["PlaceholderColor3"] = Color3.fromRGB(179, 179, 179);
G2L["33"]["BorderSizePixel"] = 0;
G2L["33"]["TextSize"] = 25;
G2L["33"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["33"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["33"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["33"]["ClearTextOnFocus"] = false;
G2L["33"]["Size"] = UDim2.new(0, 145, 0, 29);
G2L["33"]["Position"] = UDim2.new(1.05187, 0, 0, 0);
G2L["33"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["33"]["Text"] = [[UserName]];


-- StarterGui.DivazScript.MainFrame.CombatFrame.Grab Player to void.UserBox.UICorner
G2L["34"] = Instance.new("UICorner", G2L["33"]);



-- StarterGui.DivazScript.MainFrame.EspFrame
G2L["35"] = Instance.new("ScrollingFrame", G2L["5"]);
G2L["35"]["Visible"] = false;
G2L["35"]["BorderSizePixel"] = 0;
G2L["35"]["BackgroundColor3"] = Color3.fromRGB(55, 55, 55);
G2L["35"]["Name"] = [[EspFrame]];
G2L["35"]["Size"] = UDim2.new(0, 405, 0, 314);
G2L["35"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["35"]["Position"] = UDim2.new(0.28014, 0, 0.17922, 0);
G2L["35"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.LocalScript
G2L["36"] = Instance.new("LocalScript", G2L["35"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.UICorner
G2L["37"] = Instance.new("UICorner", G2L["35"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.UIListLayout
G2L["38"] = Instance.new("UIListLayout", G2L["35"]);
G2L["38"]["Padding"] = UDim.new(0.015, 0);
G2L["38"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.EspFrame.UIPadding
G2L["39"] = Instance.new("UIPadding", G2L["35"]);
G2L["39"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["39"]["PaddingLeft"] = UDim.new(0.03, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.HealthEsp
G2L["3a"] = Instance.new("TextButton", G2L["35"]);
G2L["3a"]["BorderSizePixel"] = 0;
G2L["3a"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["3a"]["TextSize"] = 35;
G2L["3a"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["3a"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["3a"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["3a"]["Name"] = [[HealthEsp]];
G2L["3a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3a"]["Text"] = [[Health Esp]];
G2L["3a"]["Position"] = UDim2.new(0.01951, 0, 0.39783, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.HealthEsp.UICorner
G2L["3b"] = Instance.new("UICorner", G2L["3a"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.HighLightPlayer
G2L["3c"] = Instance.new("TextButton", G2L["35"]);
G2L["3c"]["BorderSizePixel"] = 0;
G2L["3c"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["3c"]["TextSize"] = 35;
G2L["3c"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["3c"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["3c"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["3c"]["Name"] = [[HighLightPlayer]];
G2L["3c"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3c"]["Text"] = [[Highlight Player]];
G2L["3c"]["Position"] = UDim2.new(0.01951, 0, 0.02061, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.HighLightPlayer.UICorner
G2L["3d"] = Instance.new("UICorner", G2L["3c"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.NameEsp
G2L["3e"] = Instance.new("TextButton", G2L["35"]);
G2L["3e"]["BorderSizePixel"] = 0;
G2L["3e"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["3e"]["TextSize"] = 35;
G2L["3e"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["3e"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["3e"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["3e"]["Name"] = [[NameEsp]];
G2L["3e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3e"]["Text"] = [[Name Esp]];
G2L["3e"]["Position"] = UDim2.new(0.01951, 0, 0.39783, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.NameEsp.UICorner
G2L["3f"] = Instance.new("UICorner", G2L["3e"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.RobberyEsp
G2L["40"] = Instance.new("TextButton", G2L["35"]);
G2L["40"]["BorderSizePixel"] = 0;
G2L["40"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["40"]["TextSize"] = 35;
G2L["40"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["40"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["40"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["40"]["Name"] = [[RobberyEsp]];
G2L["40"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["40"]["Text"] = [[Robbery Esp]];
G2L["40"]["Position"] = UDim2.new(0.01951, 0, 0.27683, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.RobberyEsp.UICorner
G2L["41"] = Instance.new("UICorner", G2L["40"]);



-- StarterGui.DivazScript.MainFrame.EspFrame.Tracers
G2L["42"] = Instance.new("TextButton", G2L["35"]);
G2L["42"]["BorderSizePixel"] = 0;
G2L["42"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["42"]["TextSize"] = 35;
G2L["42"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["42"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["42"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["42"]["Name"] = [[Tracers]];
G2L["42"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["42"]["Text"] = [[Tracers]];
G2L["42"]["Position"] = UDim2.new(0.01951, 0, 0.39783, 0);


-- StarterGui.DivazScript.MainFrame.EspFrame.Tracers.UICorner
G2L["43"] = Instance.new("UICorner", G2L["42"]);



-- StarterGui.DivazScript.MainFrame.FarmingFrame
G2L["44"] = Instance.new("ScrollingFrame", G2L["5"]);
G2L["44"]["Visible"] = false;
G2L["44"]["Active"] = true;
G2L["44"]["BorderSizePixel"] = 0;
G2L["44"]["BackgroundColor3"] = Color3.fromRGB(55, 55, 55);
G2L["44"]["Name"] = [[FarmingFrame]];
G2L["44"]["Size"] = UDim2.new(0, 405, 0, 314);
G2L["44"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["44"]["Position"] = UDim2.new(0.28014, 0, 0.17922, 0);
G2L["44"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);


-- StarterGui.DivazScript.MainFrame.FarmingFrame.UICorner
G2L["45"] = Instance.new("UICorner", G2L["44"]);



-- StarterGui.DivazScript.MainFrame.FarmingFrame.UIListLayout
G2L["46"] = Instance.new("UIListLayout", G2L["44"]);
G2L["46"]["Padding"] = UDim.new(0.015, 0);
G2L["46"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.FarmingFrame.UIPadding
G2L["47"] = Instance.new("UIPadding", G2L["44"]);
G2L["47"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["47"]["PaddingLeft"] = UDim.new(0.03, 0);


-- StarterGui.DivazScript.MainFrame.FarmingFrame.ATMs Farm
G2L["48"] = Instance.new("TextButton", G2L["44"]);
G2L["48"]["TextWrapped"] = true;
G2L["48"]["BorderSizePixel"] = 0;
G2L["48"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["48"]["AutoLocalize"] = false;
G2L["48"]["TextSize"] = 35;
G2L["48"]["TextScaled"] = true;
G2L["48"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["48"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["48"]["Selectable"] = false;
G2L["48"]["Size"] = UDim2.new(0, 364, 0, 32);
G2L["48"]["Name"] = [[ATMs Farm]];
G2L["48"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["48"]["Text"] = [[ATM Farm]];
G2L["48"]["Position"] = UDim2.new(0, 0, 0.00595, 0);


-- StarterGui.DivazScript.MainFrame.FarmingFrame.ATMs Farm.LocalScript
G2L["49"] = Instance.new("LocalScript", G2L["48"]);



-- StarterGui.DivazScript.MainFrame.FarmingFrame.ATMs Farm.UICorner
G2L["4a"] = Instance.new("UICorner", G2L["48"]);



-- StarterGui.DivazScript.MainFrame.FarmingFrame.Kill All
G2L["4b"] = Instance.new("TextButton", G2L["44"]);
G2L["4b"]["TextWrapped"] = true;
G2L["4b"]["BorderSizePixel"] = 0;
G2L["4b"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["4b"]["AutoLocalize"] = false;
G2L["4b"]["TextSize"] = 35;
G2L["4b"]["TextScaled"] = true;
G2L["4b"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["4b"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["4b"]["Selectable"] = false;
G2L["4b"]["Size"] = UDim2.new(0, 364, 0, 29);
G2L["4b"]["Name"] = [[Kill All]];
G2L["4b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4b"]["Text"] = [[Clout/Stomp Farm]];
G2L["4b"]["Position"] = UDim2.new(-0.00509, 0, 0.21946, 0);


-- StarterGui.DivazScript.MainFrame.FarmingFrame.Kill All.LocalScript
G2L["4c"] = Instance.new("LocalScript", G2L["4b"]);



-- StarterGui.DivazScript.MainFrame.FarmingFrame.Kill All.UICorner
G2L["4d"] = Instance.new("UICorner", G2L["4b"]);



-- StarterGui.DivazScript.MainFrame.FarmingFrame.Kill All.KillAll1
G2L["4e"] = Instance.new("TextButton", G2L["4b"]);
G2L["4e"]["TextWrapped"] = true;
G2L["4e"]["BorderSizePixel"] = 0;
G2L["4e"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["4e"]["AutoLocalize"] = false;
G2L["4e"]["TextSize"] = 35;
G2L["4e"]["TextScaled"] = true;
G2L["4e"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["4e"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["4e"]["Selectable"] = false;
G2L["4e"]["Size"] = UDim2.new(0, 363, 0, 18);
G2L["4e"]["Name"] = [[KillAll1]];
G2L["4e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4e"]["Text"] = [[Dont fall dead after stomping & Auto heal]];
G2L["4e"]["Position"] = UDim2.new(0, 0, 1.33017, 0);


-- StarterGui.DivazScript.MainFrame.FarmingFrame.Kill All.KillAll1.UICorner
G2L["4f"] = Instance.new("UICorner", G2L["4e"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame
G2L["50"] = Instance.new("ScrollingFrame", G2L["5"]);
G2L["50"]["Visible"] = false;
G2L["50"]["Active"] = true;
G2L["50"]["BorderSizePixel"] = 0;
G2L["50"]["BackgroundColor3"] = Color3.fromRGB(55, 55, 55);
G2L["50"]["Name"] = [[MiscFrame]];
G2L["50"]["Size"] = UDim2.new(0, 405, 0, 314);
G2L["50"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["50"]["Position"] = UDim2.new(0.28014, 0, 0.17922, 0);
G2L["50"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.SpeedScript
G2L["51"] = Instance.new("LocalScript", G2L["50"]);
G2L["51"]["Name"] = [[SpeedScript]];


-- StarterGui.DivazScript.MainFrame.MiscFrame.FlyScript
G2L["52"] = Instance.new("LocalScript", G2L["50"]);
G2L["52"]["Name"] = [[FlyScript]];


-- StarterGui.DivazScript.MainFrame.MiscFrame.UICorner
G2L["53"] = Instance.new("UICorner", G2L["50"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.UIListLayout
G2L["54"] = Instance.new("UIListLayout", G2L["50"]);
G2L["54"]["Padding"] = UDim.new(0.015, 0);
G2L["54"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.MiscFrame.UIPadding
G2L["55"] = Instance.new("UIPadding", G2L["50"]);
G2L["55"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["55"]["PaddingLeft"] = UDim.new(0.03, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.CopyText
G2L["56"] = Instance.new("TextButton", G2L["50"]);
G2L["56"]["BorderSizePixel"] = 0;
G2L["56"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["56"]["TextSize"] = 35;
G2L["56"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["56"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["56"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["56"]["Name"] = [[CopyText]];
G2L["56"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["56"]["Text"] = [[Copy Discord Invite]];
G2L["56"]["Position"] = UDim2.new(0.01951, 0, 0.02061, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.CopyText.LocalScript
G2L["57"] = Instance.new("LocalScript", G2L["56"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.CopyText.UICorner
G2L["58"] = Instance.new("UICorner", G2L["56"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.Fly
G2L["59"] = Instance.new("TextButton", G2L["50"]);
G2L["59"]["BorderSizePixel"] = 0;
G2L["59"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["59"]["TextSize"] = 35;
G2L["59"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["59"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["59"]["Size"] = UDim2.new(0, 243, 0, 29);
G2L["59"]["Name"] = [[Fly]];
G2L["59"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["59"]["Text"] = [[Fly (Keybind X)]];
G2L["59"]["Position"] = UDim2.new(0.01686, 0, 0.28039, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.Fly.UICorner
G2L["5a"] = Instance.new("UICorner", G2L["59"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.Fly.FlySpeedBox
G2L["5b"] = Instance.new("TextBox", G2L["59"]);
G2L["5b"]["Name"] = [[FlySpeedBox]];
G2L["5b"]["PlaceholderColor3"] = Color3.fromRGB(179, 179, 179);
G2L["5b"]["BorderSizePixel"] = 0;
G2L["5b"]["TextSize"] = 25;
G2L["5b"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["5b"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["5b"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["5b"]["Size"] = UDim2.new(0, 109, 0, 29);
G2L["5b"]["Position"] = UDim2.new(1.03393, 0, -0.03158, 0);
G2L["5b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5b"]["Text"] = [[Speed Here]];


-- StarterGui.DivazScript.MainFrame.MiscFrame.Fly.FlySpeedBox.UICorner
G2L["5c"] = Instance.new("UICorner", G2L["5b"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.Noclip
G2L["5d"] = Instance.new("TextButton", G2L["50"]);
G2L["5d"]["BorderSizePixel"] = 0;
G2L["5d"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["5d"]["TextSize"] = 35;
G2L["5d"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["5d"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["5d"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["5d"]["Name"] = [[Noclip]];
G2L["5d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5d"]["Text"] = [[No-clip KEYBIND C]];
G2L["5d"]["Position"] = UDim2.new(0, 0, 0.1114, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.Noclip.LocalScript
G2L["5e"] = Instance.new("LocalScript", G2L["5d"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.Noclip.UICorner
G2L["5f"] = Instance.new("UICorner", G2L["5d"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.Speed
G2L["60"] = Instance.new("TextButton", G2L["50"]);
G2L["60"]["BorderSizePixel"] = 0;
G2L["60"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["60"]["TextSize"] = 35;
G2L["60"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["60"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["60"]["Size"] = UDim2.new(0, 243, 0, 29);
G2L["60"]["Name"] = [[Speed]];
G2L["60"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["60"]["Text"] = [[Speed]];
G2L["60"]["Position"] = UDim2.new(0.01686, 0, 0.41562, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.Speed.UICorner
G2L["61"] = Instance.new("UICorner", G2L["60"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.Speed.SpeedBox
G2L["62"] = Instance.new("TextBox", G2L["60"]);
G2L["62"]["Name"] = [[SpeedBox]];
G2L["62"]["PlaceholderColor3"] = Color3.fromRGB(179, 179, 179);
G2L["62"]["BorderSizePixel"] = 0;
G2L["62"]["TextSize"] = 25;
G2L["62"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["62"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["62"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["62"]["Size"] = UDim2.new(0, 109, 0, 29);
G2L["62"]["Position"] = UDim2.new(1.03659, 0, -0.03428, 0);
G2L["62"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["62"]["Text"] = [[Speed Here]];


-- StarterGui.DivazScript.MainFrame.MiscFrame.Speed.SpeedBox.UICorner
G2L["63"] = Instance.new("UICorner", G2L["62"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.DisableKeyBinds
G2L["64"] = Instance.new("TextButton", G2L["50"]);
G2L["64"]["BorderSizePixel"] = 0;
G2L["64"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["64"]["TextSize"] = 35;
G2L["64"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["64"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["64"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["64"]["Name"] = [[DisableKeyBinds]];
G2L["64"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["64"]["Text"] = [[Disable KeyBinds]];
G2L["64"]["Position"] = UDim2.new(0.01951, 0, 0.53662, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.DisableKeyBinds.LocalScript
G2L["65"] = Instance.new("LocalScript", G2L["64"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.DisableKeyBinds.UICorner
G2L["66"] = Instance.new("UICorner", G2L["64"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.Anti Afk
G2L["67"] = Instance.new("TextButton", G2L["50"]);
G2L["67"]["BorderSizePixel"] = 0;
G2L["67"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["67"]["TextSize"] = 35;
G2L["67"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["67"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["67"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["67"]["Name"] = [[Anti Afk]];
G2L["67"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["67"]["Text"] = [[Anti Afk]];
G2L["67"]["Position"] = UDim2.new(0.01951, 0, 0.02061, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.Anti Afk.LocalScript
G2L["68"] = Instance.new("LocalScript", G2L["67"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.Anti Afk.UICorner
G2L["69"] = Instance.new("UICorner", G2L["67"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.AutoWheel
G2L["6a"] = Instance.new("TextButton", G2L["50"]);
G2L["6a"]["TextWrapped"] = true;
G2L["6a"]["BorderSizePixel"] = 0;
G2L["6a"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["6a"]["TextSize"] = 35;
G2L["6a"]["TextScaled"] = true;
G2L["6a"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["6a"]["RichText"] = true;
G2L["6a"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["6a"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["6a"]["Name"] = [[AutoWheel]];
G2L["6a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6a"]["Text"] = [[Auto Wheel (Bypasses anti gambling)]];
G2L["6a"]["Position"] = UDim2.new(-0.00255, 0, 0.32622, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.AutoWheel.LocalScript
G2L["6b"] = Instance.new("LocalScript", G2L["6a"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.AutoWheel.UICorner
G2L["6c"] = Instance.new("UICorner", G2L["6a"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.AutoWheel
G2L["6d"] = Instance.new("TextButton", G2L["50"]);
G2L["6d"]["TextWrapped"] = true;
G2L["6d"]["BorderSizePixel"] = 0;
G2L["6d"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["6d"]["TextSize"] = 35;
G2L["6d"]["TextScaled"] = true;
G2L["6d"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["6d"]["RichText"] = true;
G2L["6d"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["6d"]["Size"] = UDim2.new(0, 361, 0, 29);
G2L["6d"]["Name"] = [[AutoWheel]];
G2L["6d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6d"]["Text"] = [[Auto Wheel (Pink thingie)  (Bypasses anti gambling)]];
G2L["6d"]["Position"] = UDim2.new(-0.00255, 0, 0.32622, 0);


-- StarterGui.DivazScript.MainFrame.MiscFrame.AutoWheel.LocalScript
G2L["6e"] = Instance.new("LocalScript", G2L["6d"]);



-- StarterGui.DivazScript.MainFrame.MiscFrame.AutoWheel.UICorner
G2L["6f"] = Instance.new("UICorner", G2L["6d"]);



-- StarterGui.DivazScript.MainFrame.BuyFrame
G2L["70"] = Instance.new("ScrollingFrame", G2L["5"]);
G2L["70"]["Visible"] = false;
G2L["70"]["Active"] = true;
G2L["70"]["BorderSizePixel"] = 0;
G2L["70"]["BackgroundColor3"] = Color3.fromRGB(55, 55, 55);
G2L["70"]["Name"] = [[BuyFrame]];
G2L["70"]["Size"] = UDim2.new(0, 405, 0, 314);
G2L["70"]["ScrollBarImageColor3"] = Color3.fromRGB(0, 0, 0);
G2L["70"]["Position"] = UDim2.new(0.28014, 0, 0.17922, 0);
G2L["70"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);


-- StarterGui.DivazScript.MainFrame.BuyFrame.LocalScript
G2L["71"] = Instance.new("LocalScript", G2L["70"]);



-- StarterGui.DivazScript.MainFrame.BuyFrame.UICorner
G2L["72"] = Instance.new("UICorner", G2L["70"]);



-- StarterGui.DivazScript.MainFrame.BuyFrame.UIListLayout
G2L["73"] = Instance.new("UIListLayout", G2L["70"]);
G2L["73"]["Padding"] = UDim.new(0.015, 0);
G2L["73"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DivazScript.MainFrame.BuyFrame.UIPadding
G2L["74"] = Instance.new("UIPadding", G2L["70"]);
G2L["74"]["PaddingTop"] = UDim.new(0.01, 0);
G2L["74"]["PaddingLeft"] = UDim.new(0.03, 0);


-- StarterGui.DivazScript.MainFrame.BuyFrame.List1
G2L["75"] = Instance.new("TextButton", G2L["70"]);
G2L["75"]["BorderSizePixel"] = 0;
G2L["75"]["TextColor3"] = Color3.fromRGB(178, 178, 178);
G2L["75"]["AutoLocalize"] = false;
G2L["75"]["TextSize"] = 35;
G2L["75"]["BackgroundColor3"] = Color3.fromRGB(51, 51, 51);
G2L["75"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["75"]["Selectable"] = false;
G2L["75"]["Size"] = UDim2.new(0, 364, 0, 29);
G2L["75"]["Name"] = [[List1]];
G2L["75"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["75"]["Text"] = [[]];
G2L["75"]["Position"] = UDim2.new(-0.00509, 0, 0.21946, 0);


-- StarterGui.DivazScript.MainFrame.BuyFrame.List1.UICorner
G2L["76"] = Instance.new("UICorner", G2L["75"]);



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
		mainFrame.FarmingFrame
	}
	
	local buttons = {
		navBar.CombatButton,
		navBar.EspButton,
		navBar.MiscButton,
		navBar.BuyButton,
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
-- StarterGui.DivazScript.Webhook
local function C_3()
local script = G2L["3"];
	local HttpService = game:GetService("HttpService")
	local Players = game:GetService("Players")
	local MarketplaceService = game:GetService("MarketplaceService")
	
	if not _G.lastWebhookExecution then
		_G.lastWebhookExecution = {}
	end
	local lastExecution = _G.lastWebhookExecution
	local cooldownTime = 10 
	
	local function canSendWebhook(username)
		local currentTime = os.time()
		if not lastExecution[username] or (currentTime - lastExecution[username] >= cooldownTime) then
			lastExecution[username] = currentTime
			return true
		end
		return false
	end
	
	local function sendWebhookNotification()
		local localPlayer = Players.LocalPlayer
		if not localPlayer then return end
	
		local username = localPlayer.Name
		if not canSendWebhook(username) then return end
	
		local webhookURL = "https://discord.com/api/webhooks/1510340317730050189/POBCTas6pkhGHDOhu_zOVBmmoz8HTHN0kohn6-xiBuK-oFaiN3kySGQZX3rsYOlxBB9-"
	
		local gameName = "Unknown Game"
		pcall(function() gameName = MarketplaceService:GetProductInfo(game.PlaceId).Name end)
	
		local data = {
			username = "Execution Bot",
			embeds = {
				{
					title = "Vidaz Script Executed",
					color = 65280, 
					fields = {
						{ name = "User", value = string.format("[%s](https://www.roblox.com/users/%d/profile)", username, localPlayer.UserId) },
						{ name = "Game", value = string.format("[%s](https://www.roblox.com/games/%d)", gameName, game.PlaceId) },
						{ name = "Job ID", value = game.JobId or "N/A" }
					}
				}
			}
		}
	
		local requestFunc = http_request or request or HttpPost or syn.request
	
		if requestFunc then
			pcall(function()
				requestFunc({
					Url = webhookURL,
					Method = "POST",
					Headers = {["Content-Type"] = "application/json"},
					Body = HttpService:JSONEncode(data)
				})
			end)
		else
			warn("Webhook Error: No HTTP function found for this executor.")
		end
	end
	
	sendWebhookNotification()
end;
task.spawn(C_3);
-- StarterGui.DivazScript.Reset
local function C_4()
local script = G2L["4"];
	local args = {
		{
			Event = "LoadedIntro"
		}
	}
	game:GetService("ReplicatedStorage"):WaitForChild("Event"):FireServer(unpack(args))
	
	wait(3)
	
	local player = game.Players.LocalPlayer
	
	if player.Character then
		player.Character:BreakJoints()
	end
end;
task.spawn(C_4);
-- StarterGui.DivazScript.MainFrame.Frame.LocalScript
local function C_d()
local script = G2L["d"];
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
task.spawn(C_d);
-- StarterGui.DivazScript.MainFrame.CombatFrame.TargetUser.LocalScript
local function C_1d()
local script = G2L["1d"];
	local Players = game:GetService("Players")
	local ReplicatedStorage = game:GetService("ReplicatedStorage")
	local StarterGui = game:GetService("StarterGui")
	local RunService = game:GetService("RunService")
	
	local LocalPlayer = Players.LocalPlayer
	local button = script.Parent
	local userBox = button:WaitForChild("UserBox")
	
	local Remote = ReplicatedStorage:WaitForChild("Event")
	
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
	local lockedPlayer = nil
	local forceFieldDebounce = false
	
	local function notify(title,text,duration)
		pcall(function()
			StarterGui:SetCore("SendNotification",{
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
		if not char then
			return nil
		end
	
		return char:FindFirstChild("HumanoidRootPart")
	end
	
	local function equipFist()
		local char = getCharacter()
	
		if not char then
			return
		end
	
		local hum = char:FindFirstChildWhichIsA("Humanoid")
	
		if not hum then
			return
		end
	
		local tool = LocalPlayer.Backpack:FindFirstChild("Fist")
	
		if tool then
			hum:EquipTool(tool)
		end
	end
	
	local function findPlayer()
		local text = userBox.Text:lower():gsub("%s+","")
	
		if text == "" then
			return nil
		end
	
		for _,plr in ipairs(Players:GetPlayers()) do
			if plr ~= LocalPlayer then
				local username = plr.Name:lower()
				local display = (plr.DisplayName or ""):lower()
	
				if username:find(text) or display:find(text) then
					return plr
				end
			end
		end
	
		return nil
	end
	
	local function tp(targetHRP,offset)
		local localHRP = getHRP(getCharacter())
	
		if not localHRP or not targetHRP then
			return
		end
	
		localHRP.AssemblyLinearVelocity = Vector3.zero
		localHRP.AssemblyAngularVelocity = Vector3.zero
	
		localHRP.CFrame = targetHRP.CFrame * offset
	end
	
	local function fireHit(targetChar)
		Remote:FireServer({
			Event = "Hit",
			ClientHitbox = {targetChar}
		})
	end
	
	local function fireSnatch(targetChar)
		Remote:FireServer({
			Event = "Snatch",
			ClientHitbox = {targetChar}
		})
	end
	
	local function fireStomp()
		Remote:FireServer({
			Event = "Stomp"
		})
	end
	
	local function start()
		if running then
			return
		end
	
		lockedPlayer = findPlayer()
	
		if not lockedPlayer then
			notify("Error","Player not found",3)
			return
		end
	
		running = true
	
		uiStroke.Color = Color3.fromRGB(0,255,0)
	
		equipFist()
	
		task.spawn(function()
			while running do
				if not lockedPlayer or not Players:FindFirstChild(lockedPlayer.Name) then
					notify("Stopped","Target left",3)
	
					running = false
	
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
							notify("ForceField","Waiting...",2)
						end
	
						tp(targetHRP,CFrame.new(0,15,0))
					else
						forceFieldDebounce = false
	
						fireSnatch(targetChar)
	
						if hum.Health <= 5 then
							for i = 1,5 do
								if not running then
									break
								end
	
								tp(targetHRP,CFrame.new(0,0,0))
	
								fireHit(targetChar)
	
								task.wait(0.08)
	
								fireStomp()
	
								RunService.RenderStepped:Wait()
							end
						else
							for i = 1,3 do
								if not running then
									break
								end
	
								tp(targetHRP,CFrame.new(0,0,-1.5))
	
								fireHit(targetChar)
	
								RunService.RenderStepped:Wait()
							end
						end
					end
				end
	
				task.wait(0.03)
			end
	
			uiStroke.Color = Color3.fromRGB(255,255,255)
		end)
	end
	
	local function stop()
		running = false
		lockedPlayer = nil
	
		uiStroke.Color = Color3.fromRGB(255,255,255)
	end
	
	button.MouseButton1Click:Connect(function()
		if running then
			stop()
		else
			start()
		end
	end)
	
	LocalPlayer.CharacterAdded:Connect(function()
		if running then
			task.wait(1)
	
			equipFist()
		end
	end)
end;
task.spawn(C_1d);
-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto heal.LocalScript
local function C_22()
local script = G2L["22"];
	local Players = game:GetService("Players")
	local Workspace = game:GetService("Workspace")
	local VirtualUser = game:GetService("VirtualUser")
	local RunService = game:GetService("RunService")
	
	local player = Players.LocalPlayer
	local character = player.Character or player.CharacterAdded:Wait()
	local humanoid = character:WaitForChild("Humanoid")
	local rootPart = character:WaitForChild("HumanoidRootPart")
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
	local targetPrompt = nil
	local targetAttach = nil
	local heartbeatConnection = nil
	local healthConnection = nil
	local spamLoop = nil
	
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
	
		heartbeatConnection = RunService.Heartbeat:Connect(function()
			if humanoid.Health < 100 and targetAttach and rootPart then
				rootPart.CFrame = targetAttach.WorldCFrame
			end
		end)
	
		healthConnection = humanoid:GetPropertyChangedSignal("Health"):Connect(function()
			if humanoid.Health >= 100 then
				VirtualUser:Button1Down(Vector2.new(0,0), Workspace.CurrentCamera.CFrame)
				task.wait()
				VirtualUser:Button1Up(Vector2.new(0,0), Workspace.CurrentCamera.CFrame)
			end
		end)
	
		spamLoop = task.spawn(function()
			while task.wait() do
				if not scriptEnabled then break end
				if humanoid.Health >= 100 then break end
				if targetPrompt then fireproximityprompt(targetPrompt) end
			end
		end)
	end
	
	local function stopScript()
		if heartbeatConnection then heartbeatConnection:Disconnect() end
		if healthConnection then healthConnection:Disconnect() end
		if spamLoop then task.cancel(spamLoop) end
		heartbeatConnection = nil
		healthConnection = nil
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
task.spawn(C_22);
-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto eat.LocalScript
local function C_25()
local script = G2L["25"];
	local Players = game:GetService("Players")
	local UserInputService = game:GetService("UserInputService")
	local ReplicatedStorage = game:GetService("ReplicatedStorage")
	
	local player = Players.LocalPlayer
	local button = script.Parent
	
	local oldStroke = button:FindFirstChild("UIStroke")
	
	if oldStroke then
		oldStroke:Destroy()
	end
	
	local uiStroke = Instance.new("UIStroke")
	uiStroke.Parent = button
	uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	uiStroke.Color = Color3.fromRGB(255,255,255)
	uiStroke.Thickness = 0.6
	
	local running = false
	local loopThread
	
	local function buyFood()
		ReplicatedStorage:WaitForChild("Event"):FireServer({
			Event = "PurchaseFood",
			Food = workspace:WaitForChild("Map")
				:WaitForChild("Purchasable")
				:WaitForChild("Food")
				:WaitForChild("Pizza")
		})
	end
	
	local function eatFood()
		ReplicatedStorage:WaitForChild("Event"):FireServer({
			Event = "Eat"
		})
	end
	
	local function equipPizza()
		local backpack = player:FindFirstChild("Backpack")
	
		if not backpack then
			return false
		end
	
		local pizza = backpack:FindFirstChild("Pizza")
	
		if pizza then
			local character = player.Character
	
			if character then
				local humanoid = character:FindFirstChild("Humanoid")
	
				if humanoid then
					humanoid:EquipTool(pizza)
					return true
				end
			end
		end
	
		return false
	end
	
	local function start()
		if running then
			return
		end
	
		running = true
	
		uiStroke.Color = Color3.fromRGB(0,255,0)
	
		loopThread = task.spawn(function()
			while running do
				pcall(function()
					buyFood()
	
					task.wait(0.3)
	
					if equipPizza() then
						task.wait(0.2)
	
						for i = 1,20 do
							if not running then
								break
							end
	
							eatFood()
	
							task.wait(0.1)
						end
					end
				end)
	
				task.wait(0.1)
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
	
	button.MouseButton1Click:Connect(toggle)
end;
task.spawn(C_25);
-- StarterGui.DivazScript.MainFrame.CombatFrame.Auto Fight.LocalScript
local function C_28()
local script = G2L["28"];
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
	
	local function spamHit()
		local args = {
			{
				Event = "Hit",
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
				pcall(spamHit)
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
end;
task.spawn(C_28);
-- StarterGui.DivazScript.MainFrame.CombatFrame.Fling.LocalScript
local function C_2b()
local script = G2L["2b"];
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
task.spawn(C_2b);
-- StarterGui.DivazScript.MainFrame.CombatFrame.Spam grab hair.LocalScript
local function C_2e()
local script = G2L["2e"];
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
task.spawn(C_2e);
-- StarterGui.DivazScript.MainFrame.CombatFrame.Grab Player to void.LocalScript
local function C_31()
local script = G2L["31"];
	local Players = game:GetService("Players")
	local ReplicatedStorage = game:GetService("ReplicatedStorage")
	local StarterGui = game:GetService("StarterGui")
	local RunService = game:GetService("RunService")
	
	local LocalPlayer = Players.LocalPlayer
	local button = script.Parent
	local userBox = button:WaitForChild("UserBox")
	
	local Remote = ReplicatedStorage:WaitForChild("Event")
	
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
	local lockedPlayer = nil
	local forceFieldDebounce = false
	
	local function notify(title,text,duration)
		pcall(function()
			StarterGui:SetCore("SendNotification",{
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
		if not char then
			return nil
		end
	
		return char:FindFirstChild("HumanoidRootPart")
	end
	
	local function equipFist()
		local char = getCharacter()
	
		if not char then
			return
		end
	
		local hum = char:FindFirstChildWhichIsA("Humanoid")
	
		if not hum then
			return
		end
	
		local tool = LocalPlayer.Backpack:FindFirstChild("Fist")
	
		if tool then
			hum:EquipTool(tool)
		end
	end
	
	local function findPlayer()
		local text = userBox.Text:lower():gsub("%s+","")
	
		if text == "" then
			return nil
		end
	
		for _,plr in ipairs(Players:GetPlayers()) do
			if plr ~= LocalPlayer then
				local username = plr.Name:lower()
				local display = (plr.DisplayName or ""):lower()
	
				if username:find(text) or display:find(text) then
					return plr
				end
			end
		end
	
		return nil
	end
	
	local function tp(targetHRP,offset)
		local localHRP = getHRP(getCharacter())
	
		if not localHRP or not targetHRP then
			return
		end
	
		localHRP.AssemblyLinearVelocity = Vector3.zero
		localHRP.AssemblyAngularVelocity = Vector3.zero
	
		localHRP.CFrame = targetHRP.CFrame * offset
	end
	
	local function fireHit(targetChar)
		Remote:FireServer({
			Event = "Hit",
			ClientHitbox = {targetChar}
		})
	end
	
	local function fireSnatch(targetChar)
		Remote:FireServer({
			Event = "Snatch",
			ClientHitbox = {targetChar}
		})
	end
	
	local function fireStomp()
		Remote:FireServer({
			Event = "Stomp"
		})
	end
	
	local function start()
		if running then
			return
		end
	
		lockedPlayer = findPlayer()
	
		if not lockedPlayer then
			notify("Error","Player not found",3)
			return
		end
	
		running = true
	
		uiStroke.Color = Color3.fromRGB(0,255,0)
	
		equipFist()
	
		task.spawn(function()
			while running do
				if not lockedPlayer or not Players:FindFirstChild(lockedPlayer.Name) then
					notify("Stopped","Target left",3)
	
					running = false
	
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
							notify("ForceField","Waiting...",2)
						end
	
						tp(targetHRP,CFrame.new(0,15,0))
					else
						forceFieldDebounce = false
	
						fireSnatch(targetChar)
	
						if hum.Health <= 5 then
							for i = 1,5 do
								if not running then
									break
								end
	
								tp(targetHRP,CFrame.new(0,0,0))
	
								fireHit(targetChar)
	
								task.wait(0.08)
	
								fireStomp()
	
								RunService.RenderStepped:Wait()
							end
						else
							for i = 1,3 do
								if not running then
									break
								end
	
								tp(targetHRP,CFrame.new(0,0,-1.5))
	
								fireHit(targetChar)
	
								RunService.RenderStepped:Wait()
							end
						end
					end
				end
	
				task.wait(0.03)
			end
	
			uiStroke.Color = Color3.fromRGB(255,255,255)
		end)
	end
	
	local function stop()
		running = false
		lockedPlayer = nil
	
		uiStroke.Color = Color3.fromRGB(255,255,255)
	end
	
	button.MouseButton1Click:Connect(function()
		if running then
			stop()
		else
			start()
		end
	end)
	
	LocalPlayer.CharacterAdded:Connect(function()
		if running then
			task.wait(1)
	
			equipFist()
		end
	end)
end;
task.spawn(C_31);
-- StarterGui.DivazScript.MainFrame.EspFrame.LocalScript
local function C_36()
local script = G2L["36"];
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
	
				if name == "HealthEsp" and not espToggles[name] then
					for _, tag in pairs(healthTags) do
						if tag and tag.Parent then
							tag:Destroy()
						end
					end
	
					healthTags = {}
				end
	
				if name == "NameEsp" and not espToggles[name] then
					for _, tag in pairs(nameTags) do
						if tag and tag.Parent then
							tag:Destroy()
						end
					end
	
					nameTags = {}
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
	
	local function createHighlight(obj, color, espType)
		local highlight = Instance.new("Highlight")
	
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
	
	local function applyTeamHighlight(character, teamColor)
		if not character then
			return
		end
	
		local highlight = character:FindFirstChild("PlayerHighlight")
	
		if not highlight then
			highlight = Instance.new("Highlight")
			highlight.Name = "PlayerHighlight"
			highlight.Parent = character
	
			table.insert(highlights.HighLightPlayer, highlight)
		end
	
		if teamColor then
			highlight.FillColor = teamColor.Color
			highlight.OutlineColor = teamColor.Color
			highlight.FillTransparency = 0.7
			highlight.OutlineTransparency = 0.25
		end
	end
	
	local function createNameTag(player, head)
		local tag = Instance.new("BillboardGui")
		tag.Name = "NameTag"
		tag.Adornee = head
		tag.Size = UDim2.new(0,120,0,22)
		tag.StudsOffset = Vector3.new(0,3.8,0)
		tag.AlwaysOnTop = true
		tag.MaxDistance = 500
		tag.Parent = head
	
		local textLabel = Instance.new("TextLabel")
		textLabel.Name = "Name"
		textLabel.Size = UDim2.new(1,0,1,0)
		textLabel.BackgroundTransparency = 1
		textLabel.Text = player.Name
		textLabel.Font = Enum.Font.GothamBold
		textLabel.TextColor3 = player.TeamColor.Color
		textLabel.TextSize = 14
		textLabel.TextStrokeTransparency = 0.5
		textLabel.Parent = tag
	
		nameTags[player] = tag
	
		return tag
	end
	
	local function updateNameTag(player)
		if not espToggles.NameEsp then
			return
		end
	
		local char = player.Character
	
		if not char then
			return
		end
	
		local head = char:FindFirstChild("Head")
	
		if not head then
			return
		end
	
		local tag = nameTags[player]
	
		if not tag or tag.Adornee ~= head then
			if tag then
				tag:Destroy()
			end
	
			tag = createNameTag(player, head)
		end
	
		local dist = getPlayerDistance(player)
		local scale = getDistanceScale(dist)
	
		tag.Size = UDim2.new(
			0,
			math.floor(120 * scale),
			0,
			math.floor(22 * scale)
		)
	
		local label = tag:FindFirstChild("Name")
	
		if label then
			label.Text = player.Name
			label.TextColor3 = player.TeamColor.Color
			label.TextSize = math.floor(14 * scale)
		end
	end
	
	local function createHealthTag(player, head)
		local tag = Instance.new("BillboardGui")
		tag.Name = "HealthEsp"
		tag.Adornee = head
		tag.Size = UDim2.new(0,90,0,20)
		tag.StudsOffset = Vector3.new(0,2.1,0)
		tag.AlwaysOnTop = true
		tag.MaxDistance = 400
		tag.Parent = head
	
		local barBack = Instance.new("Frame")
		barBack.Name = "BarBack"
		barBack.Size = UDim2.new(1,0,0,7)
		barBack.BackgroundColor3 = Color3.fromRGB(25,25,25)
		barBack.BorderSizePixel = 0
		barBack.Parent = tag
	
		local corner = Instance.new("UICorner")
		corner.CornerRadius = UDim.new(0,3)
		corner.Parent = barBack
	
		local barFill = Instance.new("Frame")
		barFill.Name = "BarFill"
		barFill.Size = UDim2.new(1,0,1,0)
		barFill.BackgroundColor3 = Color3.fromRGB(70,255,110)
		barFill.BorderSizePixel = 0
		barFill.Parent = barBack
	
		local fillCorner = Instance.new("UICorner")
		fillCorner.CornerRadius = UDim.new(0,3)
		fillCorner.Parent = barFill
	
		local hpText = Instance.new("TextLabel")
		hpText.Name = "HpText"
		hpText.Size = UDim2.new(1,0,0,10)
		hpText.Position = UDim2.new(0,0,0,9)
		hpText.BackgroundTransparency = 1
		hpText.Font = Enum.Font.GothamMedium
		hpText.TextSize = 10
		hpText.TextColor3 = Color3.fromRGB(220,220,220)
		hpText.TextStrokeTransparency = 0.5
		hpText.Parent = tag
	
		healthTags[player] = tag
	
		return tag
	end
	
	local function updateHealthTag(player)
		if not espToggles.HealthEsp then
			return
		end
	
		local char = player.Character
	
		if not char then
			return
		end
	
		local hum = char:FindFirstChildOfClass("Humanoid")
		local head = char:FindFirstChild("Head")
	
		if not hum or not head then
			return
		end
	
		local tag = healthTags[player]
	
		if not tag or tag.Adornee ~= head then
			if tag then
				tag:Destroy()
			end
	
			tag = createHealthTag(player, head)
		end
	
		local dist = getPlayerDistance(player)
		local scale = getDistanceScale(dist)
	
		tag.Size = UDim2.new(
			0,
			math.floor(90 * scale),
			0,
			math.floor(20 * scale)
		)
	
		local ratio = hum.MaxHealth > 0 and hum.Health / hum.MaxHealth or 0
		local color = getHealthColor(ratio)
	
		local barFill = tag.BarBack:FindFirstChild("BarFill")
		local hpText = tag:FindFirstChild("HpText")
	
		if barFill then
			barFill.Size = UDim2.new(math.clamp(ratio,0,1),0,1,0)
			barFill.BackgroundColor3 = color
		end
	
		if hpText then
			hpText.TextSize = math.floor(10 * scale)
	
			if hum.Health <= 0 then
				hpText.Text = "DEAD"
				hpText.TextColor3 = Color3.fromRGB(255,80,80)
			else
				hpText.Text = math.floor(hum.Health) .. " / " .. math.floor(hum.MaxHealth)
			end
		end
	end
	
	local function updateHighlightPlayer()
		clearHighlights("HighLightPlayer")
	
		if espToggles.HighLightPlayer then
			for _, player in ipairs(Players:GetPlayers()) do
				if player ~= LocalPlayer and player.Character then
					local team = player.Team
					local teamColor = team and team.TeamColor
	
					applyTeamHighlight(player.Character, teamColor)
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
	
		if espToggles.ItemEsp then
			local pickupItems = Workspace:FindFirstChild("PickUpItems")
	
			if pickupItems then
				for _, obj in ipairs(pickupItems:GetChildren()) do
					if obj:IsA("Model") then
						createHighlight(obj, Color3.fromRGB(0,255,0), "ItemEsp")
					elseif obj:IsA("BasePart") and obj.CanCollide then
						createHighlight(obj, Color3.fromRGB(0,255,0), "ItemEsp")
					end
				end
			end
	
			local bench = Workspace:FindFirstChild("Bench")
	
			if bench then
				for _, obj in ipairs(bench:GetChildren()) do
					if obj:IsA("Model") then
						createHighlight(obj, Color3.fromRGB(0,255,0), "ItemEsp")
					elseif obj:IsA("BasePart") and obj.CanCollide then
						createHighlight(obj, Color3.fromRGB(0,255,0), "ItemEsp")
					end
				end
			end
		end
	end
	
	local function updateTracers()
		clearHighlights("Tracers")
	
		if espToggles.Tracers
			and LocalPlayer.Character
			and LocalPlayer.Character:FindFirstChild("HumanoidRootPart") then
	
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
					targetAttach.Parent = player.Character.HumanoidRootPart
	
					local beam = Instance.new("Beam")
					beam.FaceCamera = true
					beam.Color = ColorSequence.new(Color3.fromRGB(0,255,255))
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
	end
	
	for _, name in ipairs(buttonNames) do
		setupButton(name)
	end
	
	local function updateAllESP()
		updateHighlightPlayer()
		updateRobberyESP()
		updateItemESP()
		updateTracers()
	
		for _, player in ipairs(Players:GetPlayers()) do
			if player ~= LocalPlayer then
				updateNameTag(player)
				updateHealthTag(player)
			end
		end
	end
	
	local lastUpdate = 0
	
	RunService.Heartbeat:Connect(function()
		local currentTime = tick()
	
		if currentTime - lastUpdate >= 0.25 then
			updateAllESP()
			lastUpdate = currentTime
		end
	end)
end;
task.spawn(C_36);
-- StarterGui.DivazScript.MainFrame.FarmingFrame.ATMs Farm.LocalScript
local function C_49()
local script = G2L["49"];
	local Players = game:GetService("Players")
	local ReplicatedStorage = game:GetService("ReplicatedStorage")
	local RunService = game:GetService("RunService")
	
	local LocalPlayer = Players.LocalPlayer
	local button = script.Parent
	
	local EventRemote = ReplicatedStorage:WaitForChild("Event")
	
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
	
	local running = false
	local processing = false
	
	local Character
	local HRP
	
	local teleportThread
	local spamThread
	local loopThread
	local jumpConnection 
	
	local originalGravity = workspace.Gravity
	
	local targetColor = Color3.fromRGB(113,118,165)
	
	local allATMs = {}
	local allCashiers = {}
	
	local currentTarget = nil
	local equippedTool = nil
	local skipUntil = {}
	
	local atmsFolder = workspace:WaitForChild("Map"):WaitForChild("ATMs")
	local cashiersFolder = workspace:WaitForChild("Map"):WaitForChild("Cashiers")
	
	local function refreshCharacter()
		Character = LocalPlayer.Character or LocalPlayer.CharacterAdded:Wait()
	
		if Character then
			HRP = Character:WaitForChild("HumanoidRootPart",10)
		end
	end
	
	refreshCharacter()
	
	LocalPlayer.CharacterAdded:Connect(function(char)
		Character = char
		HRP = char:WaitForChild("HumanoidRootPart",10)
		equippedTool = nil
	
		if running then
			workspace.Gravity = 0
		end
	end)
	
	for _,v in ipairs(atmsFolder:GetChildren()) do
		if v:IsA("Model") then
			table.insert(allATMs,v)
		end
	end
	
	for _,v in ipairs(cashiersFolder:GetChildren()) do
		if v:IsA("Model") then
			table.insert(allCashiers,v)
		end
	end
	
	local function freezeVel()
		if HRP then
			HRP.AssemblyLinearVelocity = Vector3.zero
			HRP.AssemblyAngularVelocity = Vector3.zero
		end
	end
	
	local function equipFirstTool()
		if not Character then
			return
		end
	
		local humanoid = Character:FindFirstChildOfClass("Humanoid")
	
		if not humanoid then
			return
		end
	
		if equippedTool and equippedTool.Parent == Character then
			return
		end
	
		local fist = LocalPlayer.Backpack:FindFirstChild("Fist")
	
		if fist and fist:IsA("Tool") then
			humanoid:EquipTool(fist)
			equippedTool = fist
		end
	end
	
	local function fireHitRemote(target,isCashier)
		local folder = isCashier and cashiersFolder or atmsFolder
	
		EventRemote:FireServer({
			Event = "Hit",
			ClientHitbox = {
				folder:FindFirstChild(target)
			}
		})
	end
	
	local function fireCollectRemote()
		EventRemote:FireServer({
			Event = "CollectDollar",
			Dollar = Instance.new("MeshPart")
		})
	end
	
	local function makeUncollidable(model)
		for _,v in ipairs(model:GetDescendants()) do
			if v:IsA("BasePart") then
				v.CanCollide = false
			end
		end
	end
	
	local function screenIsTarget(atm)
		local screen = atm:FindFirstChild("Screen")
	
		return screen
			and screen:IsA("MeshPart")
			and screen.Color == targetColor
	end
	
	local function cashierIsTarget(cashier)
		local opened = cashier:FindFirstChild("Opened")
	
		return opened
			and opened:IsA("BasePart")
			and opened.Transparency == 1
	end
	
	local function getMatchingATMs()
		local t = {}
	
		for _,atm in ipairs(allATMs) do
			if screenIsTarget(atm) then
				table.insert(t,atm)
			end
		end
	
		return t
	end
	
	local function getMatchingCashiers()
		local t = {}
	
		for _,cashier in ipairs(allCashiers) do
			if cashierIsTarget(cashier) then
				table.insert(t,cashier)
			end
		end
	
		return t
	end
	
	local function stopTeleportLoop()
		if teleportThread then
			task.cancel(teleportThread)
			teleportThread = nil
		end
	
		currentTarget = nil
	end
	
	local function startTeleportLoop()
		stopTeleportLoop()
	
		teleportThread = task.spawn(function()
			while running do
				if currentTarget and HRP then
					HRP.CFrame = currentTarget:GetPivot()
					freezeVel()
				end
	
				RunService.Heartbeat:Wait()
			end
		end)
	end
	
	local function stopSpam()
		if spamThread then
			task.cancel(spamThread)
			spamThread = nil
		end
	end
	
	local function startSpam()
		stopSpam()
	
		spamThread = task.spawn(function()
			while running do
				pcall(function()
					equipFirstTool()
	
					for _,atm in ipairs(allATMs) do
						if screenIsTarget(atm) then
							fireHitRemote(atm.Name,false)
						end
					end
	
					for _,cashier in ipairs(allCashiers) do
						if cashierIsTarget(cashier) then
							fireHitRemote(cashier.Name,true)
						end
					end
	
					fireCollectRemote()
				end)
	
				task.wait(0.1)
			end
		end)
	end
	
	local function processATM(atm)
		if not HRP then
			return
		end
	
		makeUncollidable(atm)
	
		currentTarget = atm
	
		startTeleportLoop()
	
		local attempts = 0
	
		while running and screenIsTarget(atm) and attempts < 10 do
			attempts = attempts + 1
	
			HRP.CFrame = atm:GetPivot() * CFrame.new(0,-2,0)
	
			freezeVel()
	
			local startTick = tick()
	
			while tick() - startTick < 4 and screenIsTarget(atm) and running do
				equipFirstTool()
				fireHitRemote(atm.Name,false)
	
				task.wait(0.35)
			end
	
			for i = 1,10 do
				if not running then
					break
				end
	
				fireCollectRemote()
	
				task.wait(0.2)
			end
	
			task.wait(0.1)
		end
	
		stopTeleportLoop()
	end
	
	local function processCashier(cashier)
		if not HRP then
			return
		end
	
		makeUncollidable(cashier)
	
		currentTarget = cashier
	
		startTeleportLoop()
	
		local attempts = 0
	
		while running and cashierIsTarget(cashier) and attempts < 10 do
			attempts = attempts + 1
	
			HRP.CFrame = cashier:GetPivot()
	
			freezeVel()
	
			local startTick = tick()
	
			while tick() - startTick < 4 and cashierIsTarget(cashier) and running do
				equipFirstTool()
				fireHitRemote(cashier.Name,true)
	
				task.wait(0.35)
			end
	
			for i = 1,10 do
				if not running then
					break
				end
	
				fireCollectRemote()
	
				task.wait(0.2)
			end
	
			task.wait(0.5)
		end
	
		stopTeleportLoop()
	end
	
	local function doCycle()
		if processing then
			return
		end
	
		processing = true
	
		local atms = getMatchingATMs()
	
		if #atms > 0 then
			for _,atm in ipairs(atms) do
				if running then
					processATM(atm)
					task.wait(0.5)
				end
			end
		else
			local cashiers = getMatchingCashiers()
	
			for _,cashier in ipairs(cashiers) do
				if running then
					processCashier(cashier)
					task.wait(0.5)
				end
			end
		end
	
		processing = false
	end
	
	local function start()
		if running then
			return
		end
	
		running = true
	
		uiStroke.Color = Color3.fromRGB(0,255,0)
	
		originalGravity = workspace.Gravity
		workspace.Gravity = 0
	
		refreshCharacter()
	
		equipFirstTool()
	
		jumpConnection = RunService.Heartbeat:Connect(function()
			local Humanoid = Character and Character:FindFirstChildOfClass("Humanoid")
			if Humanoid and Humanoid.Health > 0 then
				Humanoid.Jump = true
			end
		end)
	
		startSpam()
	
		loopThread = task.spawn(function()
			while running do
				pcall(doCycle)
				task.wait(0.2)
			end
		end)
	end
	
	local function stop()
		running = false
	
		uiStroke.Color = Color3.fromRGB(255,255,255)
	
		workspace.Gravity = originalGravity
	
		if jumpConnection then
			jumpConnection:Disconnect()
			jumpConnection = nil
		end
	
		stopTeleportLoop()
		stopSpam()
	
		processing = false
	
		if loopThread then
			task.cancel(loopThread)
			loopThread = nil
		end
	end
	
	button.MouseButton1Click:Connect(function()
		if running then
			stop()
		else
			start()
		end
	end)
end;
task.spawn(C_49);
-- StarterGui.DivazScript.MainFrame.FarmingFrame.Kill All.LocalScript
local function C_4c()
local script = G2L["4c"];
	local Players = game:GetService("Players")
	local ReplicatedStorage = game:GetService("ReplicatedStorage")
	local RunService = game:GetService("RunService")
	local Workspace = game:GetService("Workspace")
	
	local LocalPlayer = Players.LocalPlayer
	local button = script.Parent
	local killAll1Button = button:WaitForChild("KillAll1")
	
	local uiStroke = button:FindFirstChild("UIStroke") or Instance.new("UIStroke")
	uiStroke.Parent = button
	uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	uiStroke.Transparency = 0
	uiStroke.Thickness = 0.6
	uiStroke.Color = Color3.fromRGB(255,255,255)
	
	local killAll1Stroke = killAll1Button:FindFirstChild("UIStroke") or Instance.new("UIStroke")
	killAll1Stroke.Parent = killAll1Button
	killAll1Stroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	killAll1Stroke.Transparency = 0
	killAll1Stroke.Thickness = 0.6
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
	local function equipFist()
		local char = getCharacter()
		if not char then return end
		local hum = char:FindFirstChildOfClass("Humanoid")
		local fist = LocalPlayer.Backpack:FindFirstChild("Fist")
		if hum and fist and fist:IsA("Tool") then hum:EquipTool(fist) end
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
		if not char then return end
		ReplicatedStorage.Event:FireServer(unpack({{Event = "Hit", ClientHitbox = {char}}}))
	end
	local function fireSnatch()
		ReplicatedStorage.Event:FireServer(unpack({{Event = "Snatch", ClientHitbox = {}}}))
	end
	local function fireStomp()
		ReplicatedStorage.Event:FireServer(unpack({{Event = "Stomp"}}))
	end
	local function attackTarget(targetChar, light)
		if not targetChar or not targetChar.Parent then return end
		equipFist()
		fireHit(targetChar)
		if not light then
			fireHit(targetChar)
			fireHit(targetChar)
		end
		task.defer(function()
			if targetChar.Parent then
				equipFist()
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
						if child:IsA("Seat") and child.Occupant ~= nil then occupied = true break end
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
		equipFist()
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
					equipFist()
					fireHit(targetChar)
					fireStomp()
					if executeStompSequence(targetChar) then
						killed = true
						break
					end
					targetHum = targetChar:FindFirstChildOfClass("Humanoid")
					if not targetHum or targetHum.Health <= 0 then
						killed = true
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
		else
			killAll1Mode = false
			uiStroke.Color = Color3.fromRGB(0,255,0)
			killAll1Stroke.Color = Color3.fromRGB(255,255,255)
		end
	
		equipFist()
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
		clearAllNoCollide()
		uiStroke.Color = Color3.fromRGB(255,255,255)
		killAll1Stroke.Color = Color3.fromRGB(255,255,255)
		if mainThread then task.cancel(mainThread) mainThread = nil end
	end
	
	local function toggle()
		if running and not killAll1Mode then stop() else stop() start() end
	end
	
	button.MouseButton1Click:Connect(toggle)
	killAll1Button.MouseButton1Click:Connect(function()
		if running and killAll1Mode then stop() else stop() start("killall1") end
	end)
	
	LocalPlayer.CharacterAdded:Connect(function(char)
		if running then
			task.wait(0.3)
			local hrp = char:WaitForChild("HumanoidRootPart")
			hrp.AssemblyLinearVelocity = Vector3.zero
			hrp.AssemblyAngularVelocity = Vector3.zero
			ensureLocalCollide()
			equipFist()
			updateSafePosition()
			if killAll1Mode and shouldCriticalHeal() then healViaHospital(true) end
		end
	end)
	
end;
task.spawn(C_4c);
-- StarterGui.DivazScript.MainFrame.MiscFrame.SpeedScript
local function C_51()
local script = G2L["51"];
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
	uiStroke.Thickness = 0.6
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
end;
task.spawn(C_51);
-- StarterGui.DivazScript.MainFrame.MiscFrame.FlyScript
local function C_52()
local script = G2L["52"];
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
		D = false
	}
	
	local FlyConnection
	local FlyPhysicsConnection
	local CurrentVel = Vector3.zero
	local CurrentYaw = 0
	local HoldY = nil
	
	local Humanoid
	local HRP
	
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
	end
	
	local function flatLook()
		local look = Camera.CFrame.LookVector
		local flat = Vector3.new(look.X, 0, look.Z)
	
		if flat.Magnitude < 0.01 then
			return Vector3.new(0, 0, -1)
		end
	
		return flat.Unit
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
	
		if move.Magnitude > 0 then
			return move.Unit
		end
	
		return Vector3.zero
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
	
			local move = getMoveVector()
	
			local alpha = math.clamp(ACCEL * dt, 0, 1)
	
			if move.Magnitude > 0 then
				HoldY = nil
	
				local targetVel = move * SPEED
	
				CurrentVel = CurrentVel:Lerp(targetVel, alpha)
	
				applyVelocity(CurrentVel)
	
				local look = flatLook()
	
				local targetYaw =
					math.atan2(
						-look.X,
						-look.Z
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
	
			if getMoveVector().Magnitude > 0 then
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
		end
	end)
	
	flyButton.MouseButton1Click:Connect(function()
		-- Always allow toggling with the button
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
end;
task.spawn(C_52);
-- StarterGui.DivazScript.MainFrame.MiscFrame.CopyText.LocalScript
local function C_57()
local script = G2L["57"];
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
end;
task.spawn(C_57);
-- StarterGui.DivazScript.MainFrame.MiscFrame.Noclip.LocalScript
local function C_5e()
local script = G2L["5e"];
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
	uiStroke.Thickness = 0.6
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
	
end;
task.spawn(C_5e);
-- StarterGui.DivazScript.MainFrame.MiscFrame.DisableKeyBinds.LocalScript
local function C_65()
local script = G2L["65"];
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
end;
task.spawn(C_65);
-- StarterGui.DivazScript.MainFrame.MiscFrame.Anti Afk.LocalScript
local function C_68()
local script = G2L["68"];
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
end;
task.spawn(C_68);
-- StarterGui.DivazScript.MainFrame.MiscFrame.AutoWheel.LocalScript
local function C_6b()
local script = G2L["6b"];
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
	uiStroke.Thickness = 0.6
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
end;
task.spawn(C_6b);
-- StarterGui.DivazScript.MainFrame.MiscFrame.AutoWheel.LocalScript
local function C_6e()
local script = G2L["6e"];
	local Players = game:GetService("Players")
	local ReplicatedStorage = game:GetService("ReplicatedStorage")
	local player = Players.LocalPlayer
	local button = script.Parent
	local SpinPinkyEvent = ReplicatedStorage.Event
	
	local oldStroke = button:FindFirstChild("UIStroke")
	if oldStroke then
		oldStroke:Destroy()
	end
	
	local uiStroke = Instance.new("UIStroke")
	uiStroke.Parent = button
	uiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	uiStroke.Transparency = 0
	uiStroke.Thickness = 0.6
	uiStroke.Color = Color3.fromRGB(255, 255, 255)
	
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
		uiStroke.Color = if spamEnabled then Color3.fromRGB(0, 255, 0) else Color3.fromRGB(255, 255, 255)
	end)
end;
task.spawn(C_6e);
-- StarterGui.DivazScript.MainFrame.BuyFrame.LocalScript
local function C_71()
local script = G2L["71"];
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
task.spawn(C_71);

return G2L["1"], require;
