The star tracker uses a stepper motor to drive a gearnut around a curved threaded rod. The threaded rod forces open two platforms connected at one end by a hinge. In order to work for astrophotography the hinge must be aligned to the polar axis and be opened at a rate equal to the _sidereal rate_. To achieve this the thread count of the rod in threads per inch (c), the rotational speed of the gearnut in revolutions per minute (ω), and the hinge radius in inches (r) must balance the equation

  r = (1436 / 2π) * (ω / c)

For simplicity the current build turns a gearnut at 1 rpm around a 20 tpi rod, demanding a hinge radius of 11.427324914 inches. A ULN2003 driver board controls the 28BYJ-48 motor and power is transmitted to the gearnut using a gear train of two gears in a ratio of 52:16.
