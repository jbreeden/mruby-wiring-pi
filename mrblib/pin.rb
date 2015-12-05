class Pi::Pin
  def initialize(pin_num)
    @pin_num = pin_num
  end

  def self.input(pin_num)
    p = Pin.new(pin_num)
    p.mode = Pi::INPUT
    p
  end

  def self.output(pin_num)
    p = Pin.new(pin_num)
    p.mode = Pi::OUTPUT
    p
  end

  def mode=(mode)
    case mode
    when Pi::OUTPUT, :OUTPUT, 'OUTPUT', :OUT, 'OUT'
      Pi.pinMode(@pin_num, Pi::OUTPUT)
    when Pi::INPUT, :INPUT, 'INPUT', :IN, 'IN'
      Pi.pinMode(@pin_num, Pi::INPUT)
    else
      raise ArgumentError.new("Unrecognized mode argument #{mode}")
    end
  end

  def read
    Pi.digitalRead(@pin_num)
  end
  alias digital_read read
  alias digitalRead read

  def write(val)
    Pi.digitalWrite(@pin_num, val)
  end
  alias digital_write write
  alias digitalWrite write

  def analog_read
    Pi.analogRead(@pin_num)
  end
  alias analogRead analog_read

  def analog_write(val)
    Pi.analogWrite(@pin_num, val)
  end
  alias analogWrite analog_write
end
