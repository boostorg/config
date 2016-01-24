//       Copyright Nuxi, https://nuxi.nl/ 2015.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_GLOBAL_FILESYSTEM_NAMESPACE
//  TITLE:         global filesystem namespace support
//  DESCRIPTION:   The platform provides no support for accessing the
//                 global filesystem namespace. It may provide support
//                 for functions such as openat(), but not open().

#include <stdio.h>


namespace boost_no_global_filesystem_namespace{

int test()
{
   FILE *fp = fopen("foobar", "r");
   if (fp) fclose(fp);
   return 0;
}

}
