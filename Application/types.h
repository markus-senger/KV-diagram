#ifndef TYPES_H
#define TYPES_H

#include <QStringList>

//generally
static const int            MAX_VARIABLES               = 4;
static const int            MIN_VARIABLES               = 2;

static const int            OPTION_TRUE                 = 1;
static const int            OPTION_FALSE                = 2;
static const int            OPTION_DONT_CARE            = 3;
static const QStringList    KV_DIAGRAM_OPTIONS          = {"True", "False", "X"};

//truth table
static const int            TRUTH_TABLE_INIT_COL_NUM    = 3;
static const int            TRUTH_TABLE_INIT_ROW_NUM    = pow(2, TRUTH_TABLE_INIT_COL_NUM);
static const float          TRUTH_TABLE_WIDTH_SCALE     = 1.2;
static const float          TRUTH_TABLE_HEIGHT_SCALE    = 1.85;

#endif // TYPES_H
