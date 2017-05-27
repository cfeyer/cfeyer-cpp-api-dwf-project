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

#ifndef CFEYER__CPP_API_DWF__DEVICE_INTERFACE_HPP
#define CFEYER__CPP_API_DWF__DEVICE_INTERFACE_HPP

#include <string>

namespace cfeyer {
namespace cpp_api_dwf {

class Open_Device_Interface;

class Device_Interface
{
   public:

      Device_Interface( const Device_Interface & ) = delete;
      Device_Interface & operator = ( const Device_Interface & ) = delete;

      virtual ~Device_Interface() {}

      virtual std::string get_name() const = 0;
      virtual std::string get_user_name() const = 0;
      virtual std::string get_serial_number() const = 0;

      virtual bool is_busy() const = 0;

      virtual ::cfeyer::cpp_api_dwf::Open_Device_Interface * open() = 0;

   protected:

      Device_Interface() {}

   
};

} // namespace cpp_api_dwf
} // namespace cfeyer

#endif /* CFEYER__CPP_API_DWF__DEVICE_INTERFACE_HPP */
