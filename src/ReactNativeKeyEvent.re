type keyEvent = {
  keyCode: int,
  action: int,
  pressedKey: string,
};

type keyEventMultiple = {
  keyCode: int,
  action: int,
  pressedKey: string,
  characters: string,
};

[@bs.module "react-native-keyevent"] [@bs.scope "default"]
external onKeyDownListener: (keyEvent => unit) => unit = "onKeyDownListener";

[@bs.module "react-native-keyevent"] [@bs.scope "default"]
external onKeyUpListener: (keyEvent => unit) => unit = "onKeyUpListener";

[@bs.module "react-native-keyevent"] [@bs.scope "default"]
external onKeyMultipleListener: (keyEventMultiple => unit) => unit =
  "onKeyMultipleListener";

[@bs.module "react-native-keyevent"] [@bs.scope "default"]
external removeKeyDownListener: unit => unit = "removeKeyDownListener";

[@bs.module "react-native-keyevent"] [@bs.scope "default"]
external removeKeyUpListener: unit => unit = "removeKeyUpListener";

[@bs.module "react-native-keyevent"] [@bs.scope "default"]
external removeKeyMultipleListener: unit => unit = "removeKeyMultipleListener";
