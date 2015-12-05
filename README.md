mruby-wiring-pi
---------------

Bindings to the wiring pi library for mruby.

Features
--------

- Direct low level bindings
  + Generate by [mruby-bindings](http://github.com/jbreeden/mruby-bindings), so they mimic the C API directly
    (except they are namespaced under the `Pi` module - as in `Pi.digitalWrite(0, 1)`)
- Object Oriented Wrappers
  + So far just the `Pin` class, with methods like `read`, `write`, `mode=`, `analog_read`, & `analog_write`

Let's Blink Some LEDs!
----------------------

```Ruby
class MyBoard
  def initialize
    # `input` & `output` class methods on Pi::Pin take
    # care of setting the mode for you. You just pass
    # in the pin number.
    @led = Pi::Pin.output(0)
  end
  
  def blink
    3.times do
      @led.write(1)
      Pi.delay(300)
      @led.write(0)
      Pe.delay(300)
    end
  end
end

# Configure the library to use the WiringPi pin numbering scheme
Pi.wiringPiSetup

board = MyBoard.new
board.blink
```

Supported Functions
-------------------

`mruby-wiring-pi` binds the following functions from WiringPi:

```
analogRead
analogWrite
delay
delayMicroseconds
digitalRead
digitalWrite
digitalWriteByte
getAlt
gpioClockSet
micros
millis
physPinToGpio
piBoardRev
piHiPri
piLock
piUnlock
pinMode
pinModeAlt
pullUpDnControl
pwmSetClock
pwmSetMode
pwmSetRange
pwmToneWrite
pwmWrite
setPadDrive
waitForInterrupt
wiringPiFailure
wiringPFindNode
wiringPNewNode
wiringPiSetup
wiringPiSetupGpio
wiringPiSetupPhys
wiringPiSetupSys
wpiPinToGpio
```
