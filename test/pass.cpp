#ifdef BOOST_ASSERT_CONFIG
#  undef BOOST_ASSERT_CONFIG
#endif

#include <boost/config.hpp>
#include "test.hpp"
@BOOST_CONFIG_TR1_INCLUDE@

@BOOST_CONFIG_IFDEF@ @BOOST_CONFIG_MACRO@
#include "@BOOST_CONFIG_FILE@.ipp"
#else
namespace @BOOST_CONFIG_NS@ = empty_boost;
#endif

int main( int, char *[] )
{
   return @BOOST_CONFIG_NS@::test();
}
