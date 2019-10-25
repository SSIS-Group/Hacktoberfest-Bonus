# Transform any type to a boolean, sometimes is usefull, but be carefull with
# strings like !!'false' returns true, because anything but nil and false is
# true :)
def to_bool(anything)
  !!anything
end
