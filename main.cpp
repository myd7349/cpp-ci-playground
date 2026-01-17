#include <iostream>

// https://github.com/zeux/pugixml/blob/master/src/pugixml.hpp#L40-L46
// Check if std::string_view is available
#if !defined(PUGIXML_HAS_STRING_VIEW) && !defined(PUGIXML_NO_STL)
#    if __cplusplus >= 201703L
#        define PUGIXML_HAS_STRING_VIEW
#    elif defined(_MSVC_LANG) && _MSVC_LANG >= 201703L
#        define PUGIXML_HAS_STRING_VIEW
#    endif
#endif

#define STR_IMPL(x) #x
#define STR(x) STR_IMPL(x)

int main()
{
    std::cout << "__cplusplus: " << STR(__cplusplus) << std::endl;

#ifdef _MSVC_LANG
    std::cout << "_MSVC_LANG: " << STR(_MSVC_LANG) << std::endl;
#endif

#ifdef PUGIXML_HAS_STRING_VIEW
    std::cout << "PUGIXML_HAS_STRING_VIEW is defined." << std::endl;
#else
    std::cout << "PUGIXML_HAS_STRING_VIEW is not defined." << std::endl;
#endif

    return 0;
}