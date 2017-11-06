# Java LibAS and Command Line Interface
This a port of LibAS on Java. We use the Javax library to play/record sensing sounds.
Thus, this porting theoretically can be executed on any device (Mac/Windows/Linux) that support Java/Javax and have speakers/microphones installed.

# Install

## Prerequisites
You need to ensure Java is installed and Javax is supported in your device.
Here is the link to install from the (official Java site)[https://java.com/en/download/].

You will know Java is installed by executing the following command:
```
java -version
```

## Install
Just download our [release .jar](release) file to your device. Or you can also include this jar library into your own program (just like how our Android/iOS/Tizen LibAS work)

## Usage

```
java -jar libas.jar [mode] [server ip] [server port]
```

For example, to connect a Matlab server on 192.168.0.1:50001:
```
java -jar libas.jar remote 192.168.0.1 50001
```

Note, our Java command-line interface only allows the **remote** sensing mode.
So it is required to setup a Matlab server as introduced in [README](/LibAcousticSensing/Matlab) of LibAS Matlab.

## Limitation
Even though this Java LibAS should be executed on any Java/Javax-supported device,
different devices might have their own limitations on using the built-in microphones/speakers.
Unfortunately, we can't tune LibAS against every Java-supported devices (like what we did for the Android/iPhone/Tizen) since there are just too many.
Followings are some tips to make acoustic sensing app work:
- **Mac**: Even MAC has two microphones, one is used only for noise cancellation. We suggest you turn off the ``ambient noise reduction`` in your ``System Preferences -> Sound -> Input`` setting.

Any pull request to automatically solve these issue is welcome!