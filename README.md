# BuckleScript bindings to React Native KeyEvent

[![Build Status](https://github.com/sgny/reason-react-native-keyevent/workflows/Build/badge.svg)](https://github.com/sgny/reason-react-native-keyevent/actions)
[![Version](https://img.shields.io/npm/v/reason-react-native-keyevent.svg)](https://www.npmjs.com/package/reason-react-native-keyevent)

These are BuckleScript bindings to
[`React Native KeyEvent`](https://github.com/kevinejohn/react-native-keyevent),
in Reason syntax.

Version `x.y.z` of `reason-react-native-keyevent` should be compatible with
version `x.y.*` of `react-native-keyevent`.

## Changes

Please see the [changelog](./CHANGELOG.md).

## Installation

With `yarn`:

```shell
yarn add reason-react-native-keyevent
```

With `npm`:

```shell
npm install reason-react-native-keyevent
```

`react-native-keyevent` should be properly installed, and linked if you are
using React Native versions below 0.60. Please refer to the relevant
[instructions](https://github.com/kevinejohn/react-native-keyevent/blob/master/README.md).

Finally, `reason-react-native-keyevent` should be added to `bs-dependencies` in
`BuckleScript` configuration of the project (`bsconfig.json`). For example,

```json
{
  ...
  "bs-dependencies": ["reason-react", "reason-react-native", "reason-react-native-keyevent"],
  ...
}
```

## Use

Please refer to the [implementation](./src/ReactNativeKeyEvent.re), further
documentation is not available.
