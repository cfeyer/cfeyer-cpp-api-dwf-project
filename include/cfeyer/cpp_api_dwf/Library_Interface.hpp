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

#ifndef CFEYER__CPP_API_DWF__LIBRARY_INTERFACE_HPP
#define CFEYER__CPP_API_DWF__LIBRARY_INTERFACE_HPP

namespace cfeyer {
namespace cpp_api_dwf {

class Device_Enumerator_Interface;

class Library_Interface
{
   public:

      virtual ~Library_Interface() {}

      virtual ::cfeyer::cpp_api_dwf::Device_Enumerator_Interface & get_device_enumerator() = 0;

   protected:

      Library_Interface() {}

   private:

      Library_Interface( const Library_Interface & ); // disallow
      Library_Interface & operator = ( const Library_Interface & ); // disallow
};

} // namespace dwf_plusplus_api
} // namespace cfeyer

#endif /* CFEYER__CPP_API_DWF__LIBRARY_INTERFACE_HPP */
