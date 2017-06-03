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

#ifndef CFEYER__CPP_API_DWF__ANALOG_OUTPUT__ABSTRACT_SIGNAL_COMPONENT_INTERFACE_HPP
#define CFEYER__CPP_API_DWF__ANALOG_OUTPUT__ABSTRACT_SIGNAL_COMPONENT_INTERFACE_HPP

#include <cfeyer/cpp_api_dwf/analog_output/Waveform_Shape_Enum.hpp>

namespace cfeyer {
namespace cpp_api_dwf {
namespace analog_output {

class Abstract_Signal_Component_Interface
{
   public:

      virtual ~Abstract_Signal_Component_Interface() {}

      virtual void enable() = 0;
      virtual void disable() = 0;
      virtual bool is_enabled() const = 0;

      virtual void set_waveform_shape( ::cfeyer::cpp_api_dwf::analog_output::Waveform_Shape::Enum waveform ) = 0;
      virtual ::cfeyer::cpp_api_dwf::analog_output::Waveform_Shape::Enum get_waveform_shape() const = 0;

      virtual void set_data( double samples[], int sample_count ) = 0;

      virtual void set_sample_frequency_hz( double frequency ) = 0;
      virtual double get_sample_frequency_hz() const = 0;
      virtual double get_min_sample_frequency_hz() const = 0;
      virtual double get_max_sample_frequency_hz() const = 0;

   protected:

      Abstract_Signal_Component_Interface() {}

   private:

      Abstract_Signal_Component_Interface( const Abstract_Signal_Component_Interface & ); // disallow
      Abstract_Signal_Component_Interface & operator = ( const Abstract_Signal_Component_Interface & ); // disallow

};

} // namespace analog_output
} // namespace cpp_api_dwf
} // namespace cfeyer

#endif /* CFEYER__CPP_API_DWF__ANALOG_OUTPUT__ABSTRACT_SIGNAL_COMPONENT_INTERFACE_HPP */
