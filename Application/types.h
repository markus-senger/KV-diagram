#ifndef TYPES_H
#define TYPES_H

#include <QStringList>
#include <QColor>

//generally
static const int                    PAGE_INDEX_SOLVER                       = 0;
static const int                    PAGE_INDEX_LEARNING_OVERVIEW            = 1;
static const int                    PAGE_INDEX_LEARNING_TUTORIAL            = 2;
static const int                    PAGE_INDEX_LEARNING_TASK1               = 3;

static const QString                MAIN_COLOR                              = "#ffcc80";
static const QString                SHADOW_COLOR                            = "#bab8b8";
static const int                    MAX_VARIABLES                           = 4;
static const int                    MIN_VARIABLES                           = 2;

static const int                    OPTION_FALSE                            = 0;
static const int                    OPTION_TRUE                             = 1;
static const int                    OPTION_DONT_CARE                        = 2;
static const QStringList            KV_DIAGRAM_OPTIONS                      = {"False", "True", "X"};

static const std::vector<QColor>    KV_DIAGRAM_COLORS                       = {
                                                                                    QColor(250, 112, 100, 50),  // red
                                                                                    QColor(102, 255, 123, 50),  // green
                                                                                    QColor(101, 121, 252, 50),  // blue
                                                                                    QColor(189, 187, 189, 50)   // grey
                                                                              };

//truth table
static const int                    TRUTH_TABLE_2VAR                        = 2;
static const int                    TRUTH_TABLE_2VAR_WIDTH                  = 380;
static const int                    TRUTH_TABLE_2VAR_HEIGHT                 = 162;

static const int                    TRUTH_TABLE_3VAR                        = 3;
static const int                    TRUTH_TABLE_3VAR_WIDTH                  = 520;
static const int                    TRUTH_TABLE_3VAR_HEIGHT                 = 294;

static const int                    TRUTH_TABLE_4VAR                        = 4;
static const int                    TRUTH_TABLE_4VAR_WIDTH                  = 620;
static const int                    TRUTH_TABLE_4VAR_HEIGHT                 = 542;

static const int                    TRUTH_TABLE_INIT_COL_NUM                = 3;
static const int                    TRUTH_TABLE_INIT_ROW_NUM                = pow(2, TRUTH_TABLE_INIT_COL_NUM);
static const float                  TRUTH_TABLE_WIDTH_SCALE                 = 1.8;
static const float                  TRUTH_TABLE_HEIGHT_SCALE                = 1.85;


//kv diagram
static const int                    KV_DIAGRAM_2VAR_COL_NUM                 = 3;
static const int                    KV_DIAGRAM_2VAR_ROW_NUM                 = 3;
static const int                    KV_DIAGRAM_2VAR_WIDTH                   = 145;
static const int                    KV_DIAGRAM_2VAR_HEIGHT                  = 122;

static const int                    KV_DIAGRAM_3VAR_COL_NUM                 = 5;
static const int                    KV_DIAGRAM_3VAR_ROW_NUM                 = 4;
static const int                    KV_DIAGRAM_3VAR_WIDTH                   = 240;
static const int                    KV_DIAGRAM_3VAR_HEIGHT                  = 162;

static const int                    KV_DIAGRAM_4VAR_COL_NUM                 = 6;
static const int                    KV_DIAGRAM_4VAR_ROW_NUM                 = 6;
static const int                    KV_DIAGRAM_4VAR_WIDTH                   = 292;
static const int                    KV_DIAGRAM_4VAR_HEIGHT                  = 242;

#endif // TYPES_H
