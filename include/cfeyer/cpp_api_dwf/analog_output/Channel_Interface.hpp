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

#ifndef CFEYER__CPP_API_DWF__ANALOG_OUTPUT__CHANNEL_INTERFACE_HPP
#define CFEYER__CPP_API_DWF__ANALOG_OUTPUT__CHANNEL_INTERFACE_HPP

namespace cfeyer {
namespace cpp_api_dwf {
namespace analog_output {

class Carrier_Component_Interface;

class Channel_Interface
{
   public:

      virtual ~Channel_Interface() {}

      virtual void start() = 0;
      virtual void stop() = 0;
      virtual void reset() = 0;

      virtual ::cfeyer::cpp_api_dwf::analog_output::Carrier_Component_Interface * get_carrier_component() const = 0;

      virtual void set_repeat_count( int repeat_count ) = 0;
      virtual int get_repeat_count() const = 0;
      virtual int get_min_repeat_count() const = 0;
      virtual int get_max_repeat_count() const = 0;

   protected:

      Channel_Interface() {}

   private:
   
      Channel_Interface( const Channel_Interface & ); // disallow
      Channel_Interface & operator = ( const Channel_Interface & ); // disallow

};

} // namespace analog_output
} // namespace cpp_api_dwf
} // namespace cfeyer

#endif /* CFEYER__CPP_API_DWF__ANALOG_OUTPUT__CHANNEL_INTERFACE_HPP */
