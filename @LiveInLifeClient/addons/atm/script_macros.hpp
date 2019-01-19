
//insert custom macros
#define DIALOG_ATM_DISPLAY (findDisplay 1510)
#define DIALOG_ATM_TITLE (DIALOG_ATM_DISPLAY displayCtrl 1512)
#define DIALOG_ATM_BACKGROUND (DIALOG_ATM_DISPLAY displayCtrl 1511)
#define DIALOG_ATM_DESCRIPTION (DIALOG_ATM_DISPLAY displayCtrl 1513)
#define DIALOG_ATM_BUTTON_1 (DIALOG_ATM_DISPLAY displayCtrl 1522)
#define DIALOG_ATM_BUTTON_1_TEXT (DIALOG_ATM_DISPLAY displayCtrl 1530)
#define DIALOG_ATM_BUTTON_1_BACKGROUND (DIALOG_ATM_DISPLAY displayCtrl 1514)
#define DIALOG_ATM_BUTTON_2 (DIALOG_ATM_DISPLAY displayCtrl 1523)
#define DIALOG_ATM_BUTTON_2_TEXT (DIALOG_ATM_DISPLAY displayCtrl 1531)
#define DIALOG_ATM_BUTTON_2_BACKGROUND (DIALOG_ATM_DISPLAY displayCtrl 1515)
#define DIALOG_ATM_BUTTON_3 (DIALOG_ATM_DISPLAY displayCtrl 1524)
#define DIALOG_ATM_BUTTON_3_TEXT (DIALOG_ATM_DISPLAY displayCtrl 1532)
#define DIALOG_ATM_BUTTON_3_BACKGROUND (DIALOG_ATM_DISPLAY displayCtrl 1516)
#define DIALOG_ATM_BUTTON_4 (DIALOG_ATM_DISPLAY displayCtrl 1525)
#define DIALOG_ATM_BUTTON_4_TEXT (DIALOG_ATM_DISPLAY displayCtrl 1533)
#define DIALOG_ATM_BUTTON_4_BACKGROUND (DIALOG_ATM_DISPLAY displayCtrl 1517)
#define DIALOG_ATM_BUTTON_5 (DIALOG_ATM_DISPLAY displayCtrl 1526)
#define DIALOG_ATM_BUTTON_5_TEXT (DIALOG_ATM_DISPLAY displayCtrl 1534)
#define DIALOG_ATM_BUTTON_5_BACKGROUND (DIALOG_ATM_DISPLAY displayCtrl 1518)
#define DIALOG_ATM_BUTTON_6 (DIALOG_ATM_DISPLAY displayCtrl 1527)
#define DIALOG_ATM_BUTTON_6_TEXT (DIALOG_ATM_DISPLAY displayCtrl 1535)
#define DIALOG_ATM_BUTTON_6_BACKGROUND (DIALOG_ATM_DISPLAY displayCtrl 1519)
#define DIALOG_ATM_BUTTON_7 (DIALOG_ATM_DISPLAY displayCtrl 1528)
#define DIALOG_ATM_BUTTON_7_TEXT (DIALOG_ATM_DISPLAY displayCtrl 1536)
#define DIALOG_ATM_BUTTON_7_BACKGROUND (DIALOG_ATM_DISPLAY displayCtrl 1520)
#define DIALOG_ATM_BUTTON_8 (DIALOG_ATM_DISPLAY displayCtrl 1529)
#define DIALOG_ATM_BUTTON_8_TEXT (DIALOG_ATM_DISPLAY displayCtrl 1537)
#define DIALOG_ATM_BUTTON_8_BACKGROUND (DIALOG_ATM_DISPLAY displayCtrl 1521)
#define DIALOG_ATM_ACCOUNT_LIST (DIALOG_ATM_DISPLAY displayCtrl 1540)
#define DIALOG_ATM_PROFILE_LIST (DIALOG_ATM_DISPLAY displayCtrl 1542)
#define DIALOG_ATM_EDIT_VALUE (DIALOG_ATM_DISPLAY displayCtrl 1538)
#define DIALOG_ATM_EDIT_VALUE_BACKGROUND (DIALOG_ATM_DISPLAY displayCtrl 1539)

#define DIALOG_ATM_EDIT_VALUE_SHOW(var1) DIALOG_ATM_EDIT_VALUE ctrlShow var1; DIALOG_ATM_EDIT_VALUE_BACKGROUND ctrlShow var1

#define DIALOG_ATM_ACTIVE_BUTTONS(var1) { \
        private _show = (_forEachIndex + 1) in (var1); \
        ARG_1(_x,0) ctrlShow _show; \
        ARG_1(_x,1) ctrlShow _show; \
        ARG_1(_x,2) ctrlShow _show; \
    } forEach [[DIALOG_ATM_BUTTON_1,DIALOG_ATM_BUTTON_1_BACKGROUND,DIALOG_ATM_BUTTON_1_TEXT],[DIALOG_ATM_BUTTON_2,DIALOG_ATM_BUTTON_2_BACKGROUND,DIALOG_ATM_BUTTON_2_TEXT],[DIALOG_ATM_BUTTON_3,DIALOG_ATM_BUTTON_3_BACKGROUND,DIALOG_ATM_BUTTON_3_TEXT],[DIALOG_ATM_BUTTON_4,DIALOG_ATM_BUTTON_4_BACKGROUND,DIALOG_ATM_BUTTON_4_TEXT],[DIALOG_ATM_BUTTON_5,DIALOG_ATM_BUTTON_5_BACKGROUND,DIALOG_ATM_BUTTON_5_TEXT],[DIALOG_ATM_BUTTON_6,DIALOG_ATM_BUTTON_6_BACKGROUND,DIALOG_ATM_BUTTON_6_TEXT],[DIALOG_ATM_BUTTON_7,DIALOG_ATM_BUTTON_7_BACKGROUND,DIALOG_ATM_BUTTON_7_TEXT],[DIALOG_ATM_BUTTON_8,DIALOG_ATM_BUTTON_8_BACKGROUND,DIALOG_ATM_BUTTON_8_TEXT]]
