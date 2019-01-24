/*
Author : Tonic
Edited by Brizi Jaeger
*/







class Life_atm_management {
 idd = 2700;
 name= "life_atm_menu";
 movingEnable = 0;
 enableSimulation = 1;




 class controlsBackground {
 class MainBackground: Life_RscText {
 colorBackground[] = {0, 0, 0, 0.7};
 idc = -1;
 x = 0.172054;
 y = 0.0579797;
 w = 0.655891;
 h = 0.884041;
 };




 class textline: Life_RscText {
 colorBackground[] = {0.251,0.424,1,1}; // {0, 0, 0, 0.7};
 idc = -1;
 x = 0.212048;
 y = 0.482999;
 w = 0.575905;
 h = 0.0102002;
 };
 class textline1: Life_RscText {
 colorBackground[] = {0.251,0.424,1,1}; // {0, 0, 0, 0.7};
 idc = -1;
 x = 0.212048;
 y = 0.619005;
 w = 0.575905;
 h = 0.0102002;
 };
 class textline12: Life_RscText {
 colorBackground[] = {0.251,0.424,1,1}; // {0, 0, 0, 0.7};
 idc = -1;
 x = 0.212048;
 y = 0.755012;
 w = 0.575905;
 h = 0.0102002;
 };
 };




 class controls {
 class CashTitle: Life_RscStructuredText {
 idc = 2701;
 text = "";
 x = 0.26004;
 y = 0.176985;
 w = 0.479921;
 h = 0.170008;
 };




 class Title: Life_RscTitle {
 colorBackground[] = {0.251,0.424,1,1}; // {0, 0, 0, 0};
 idc = -1;
 text = "Geldautomat Managment";
 x = 0.180053;
 y = 0.0749805;
 w = 0.639894;
 h = 0.0680031;
 };




 class WithdrawButton: Life_RscButtonMenu {
 idc = -1;
 text = "Abheben";
 colorBackground[] = {0,0.357,0.612,1};
 onButtonClick = "[] call life_fnc_bankWithdraw";
 x = 0.228045;
 y = 0.534002;
 w = 0.23996;
 h = 0.0510023;
 };




 class DepositButton: Life_RscButtonMenu {
 idc = -1;
 text = "Einzahlen";
 colorBackground[] = {0,0.357,0.612,1};
 onButtonClick = "[] call life_fnc_bankDeposit";
 x = 0.531995;
 y = 0.534002;
 w = 0.247959;
 h = 0.0510023;
 };




 class moneyEdit: Life_RscEdit {
 idc = 2702;
 text = "100";
 sizeEx = 0.030;
 x = 0.26004;
 y = 0.380995;
 w = 0.479921;
 h = 0.0680031;
 };




 class PlayerList: Life_RscCombo {
 idc = 2703;
 x = 0.228045;
 y = 0.670008;
 w = 0.23996;
 h = 0.0510023;
 };




 class TransferButton: Life_RscButtonMenu {
 idc = -1;
 text = "Überweisen";
 colorBackground[] = {0.09,0.471,1,1};
 onButtonClick = "[] call life_fnc_bankTransfer";
 x = 0.531995;
 y = 0.670008;
 w = 0.247959;
 h = 0.0510023;
 };




 class GangWithdraw : TransferButton {
 idc = 2705;
 text = "Ab. Gang";
 tooltip = "Gangkonto Geld abheben!";
 colorBackground[] = {0.09,0.471,1,1};
 onButtonClick = "[] call life_fnc_gangWithdraw";
 x = 0.228045;
 y = 0.806014;
 w = 0.23996;
 h = 0.0510023;
 };




 class GangDeposit : TransferButton {
 idc = 2706;
 text = "Ei. Gang";
 colorBackground[] = {0.09,0.471,1,1};
 onButtonClick = "[] call life_fnc_gangDeposit";
 x = 0.531995;
 y = 0.806014;
 w = 0.247959;
 h = 0.0510023;
 };




 class CloseButtonKey: Life_RscButtonMenu {
 idc = -1;
 text = "";
 tooltip = "Schliesse mich!";
 colorBackground[] = {1,0,0,1};
 onButtonClick = "closeDialog 0;";
 x = 0.795951;
 y = 0.0919813;
 w = 0.0175971;
 h = 0.0340016;
 };
 };
};