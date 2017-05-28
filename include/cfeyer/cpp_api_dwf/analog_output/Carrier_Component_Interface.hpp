// MIT License
// 
// Copyright (c) 2017 Chris Feyerchak
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef CFEYER__CPP_API_DWF__ANALOG_OUTPUT__CARRIER_COMPONENT_INTERFACE_HPP
#define CFEYER__CPP_API_DWF__ANALOG_OUTPUT__CARRIER_COMPONENT_INTERFACE_HPP

#include <cfeyer/cpp_api_dwf/analog_output/Abstract_Signal_Component_Interface.hpp>

namespace cfeyer {
namespace cpp_api_dwf {
namespace analog_output {

enum class Waveform_Shape_Enum;

class Carrier_Component_Interface : virtual public Abstract_Signal_Component_Interface
{
   public:

      Carrier_Component_Interface( const Carrier_Component_Interface & ) = delete;
      Carrier_Component_Interface & operator = ( const Carrier_Component_Interface & ) = delete;

      virtual ~Carrier_Component_Interface() {}

      virtual void set_amplitude_volts( double amplitude ) = 0;
      virtual double get_amplitude_volts() const = 0;
      virtual double get_min_amplitude_volts() const = 0;
      virtual double get_max_amplitude_volts() const = 0;

   protected:

      Carrier_Component_Interface() {}
   
};

} // namespace analog_output
} // namespace cpp_api_dwf
} // namespace cfeyer

#endif /* CFEYER__CPP_API_DWF__ANALOG_OUTPUT__CARRIER_COMPONENT_INTERFACE_HPP */
