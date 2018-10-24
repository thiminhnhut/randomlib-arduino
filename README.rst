##################################################
Thư viện tạo số Random với Arduino, ESP8266, ESP32
##################################################

:Info: Github <https://github.com/thiminhnhut/randomlib-arduino>
:Author: Thi Minh Nhựt <thiminhnhut@gmail.com>
:Date: $Date: 19/10/2018 $
:Revision: $Revision: 1.0.0 $
:Description: Thư viện tạo số Random với Arduino, ESP8266, ESP32

=================================================================

.. sectnum::

.. contents:: Nội dung

=================================================================

Nguồn tham khảo
***************

1. `random() - Arduino.cc <https://www.arduino.cc/reference/en/language/functions/random-numbers/random/>`_

#. `C++ random float number generation - Stack Overflow <https://stackoverflow.com/questions/686353/c-random-float-number-generation>`_

Nội dung thực hiện
******************

Thư viện RandomLib
==================

* Thư mục source: `src <https://github.com/thiminhnhut/randomlib-arduino/blob/master/src>`_.

  * File `RandomLib.h <https://github.com/thiminhnhut/randomlib-arduino/blob/master/src/RandomLib.h>`_:

  .. code::

    RandomLib();

    int getNumberInt(int maxValue);

    int getNumberInt(int minValue, int maxValue);

    float getNumberFloat(float minValue, float maxValue);

  * File `RandomLib.cpp <https://github.com/thiminhnhut/randomlib-arduino/blob/master/src/RandomLib.cpp>`_.

* Ví dụ: `demo.ino <https://github.com/thiminhnhut/randomlib-arduino/blob/master/examples/demo/demo.ino>`_

Chức năng của thư viện RandomLib
================================

* Tạo số liệu random trong quá trình demo, phát triển sản phẩm trước khi thu thập và xử lý số liệu thực tế.
