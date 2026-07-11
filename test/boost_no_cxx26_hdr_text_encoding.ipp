//  (C) Copyright John Maddock 2026.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX26_HDR_TEXT_ENCODING
//  TITLE:         <text_encoding>
//  DESCRIPTION:   The platform supports the <text_encoding> header.

#include <text_encoding>

namespace boost_no_cxx26_hdr_text_encoding {

int test()
{
    using std::text_encoding;
    using std::hash;
    return 0;
}

}  //namespace boost_no_cxx26_hdr_text_encoding {

