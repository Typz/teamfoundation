#ifndef TEAMFOUNDATION_GLOBAL_H
#define TEAMFOUNDATION_GLOBAL_H

#include <QtGlobal>

#if defined(TEAMFOUNDATION_LIBRARY)
#  define TEAMFOUNDATIONSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TEAMFOUNDATIONSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TEAMFOUNDATION_GLOBAL_H
