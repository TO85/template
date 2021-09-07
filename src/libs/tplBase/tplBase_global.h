#pragma once

#include <QtCore/qglobal.h>

#if defined(TPLBASE_LIBRARY)
#  define TPLBASE_EXPORT Q_DECL_EXPORT
#else
#  define TPLBASE_EXPORT Q_DECL_IMPORT
#endif
