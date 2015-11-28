#!/bin/bash
cocos compile -p android --android-studio
adb install -r ./proj.android-studio/app/build/outputs/apk/SharkMan-debug.apk