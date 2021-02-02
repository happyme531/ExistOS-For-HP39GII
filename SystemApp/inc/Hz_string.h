#ifndef HZ_STRING_H
#define HZ_STRING_H
const unsigned char HzString1[6][33] = {

    {'F', 0x08, 0x00, 0xC8, 0x1F, 0x48, 0x10, 0x48, 0x10, 0xDF, 0x1F, 0x48, 0x10, 0x4C, 0x10, 0xDC, 0x1F, 0x6A, 0x22, 0x4A, 0x12, 0x49, 0x0C, 0x48, 0x04, 0x48, 0x08, 0x48, 0x11, 0xC8, 0x60, 0x48, 0x00}, /*"根",0*/
    {'F', 0x00, 0x00, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10}, /*"目",1*/
    {'F', 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x08, 0x00, 0x08, 0xF8, 0x0F, 0x00, 0x08, 0x00, 0x08, 0xFF, 0x7F, 0x80, 0x00, 0x84, 0x10, 0x88, 0x09, 0xA0, 0x06, 0x90, 0x04, 0x8C, 0x18, 0xA3, 0x60, 0x40, 0x00}, /*"录",2*/
    {'F', 0x00, 0x00, 0xFC, 0x0F, 0x04, 0x08, 0x04, 0x08, 0xFC, 0x0F, 0x04, 0x20, 0x04, 0x20, 0xF8, 0x3F, 0x00, 0x00, 0x10, 0x04, 0x10, 0x04, 0xFF, 0x7F, 0x10, 0x04, 0x08, 0x04, 0x04, 0x04, 0x02, 0x04}, /*"异",3*/
    {'F', 0x80, 0x00, 0x88, 0x08, 0x90, 0x04, 0xFE, 0x7F, 0x02, 0x40, 0xF9, 0x2F, 0x08, 0x08, 0xF8, 0x0F, 0x80, 0x00, 0xFC, 0x1F, 0x84, 0x10, 0x84, 0x10, 0x84, 0x14, 0x84, 0x08, 0x80, 0x00, 0x80, 0x00}, /*"常",4*/
    {'F', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"：",5*/

};

const unsigned char HzString2[44][33] = {

    {'F', 0x08, 0x00, 0xC8, 0x1F, 0x48, 0x10, 0x48, 0x10, 0xDF, 0x1F, 0x48, 0x10, 0x4C, 0x10, 0xDC, 0x1F, 0x6A, 0x22, 0x4A, 0x12, 0x49, 0x0C, 0x48, 0x04, 0x48, 0x08, 0x48, 0x11, 0xC8, 0x60, 0x48, 0x00}, /*"根",0*/
    {'F', 0x00, 0x00, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10}, /*"目",1*/
    {'F', 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x08, 0x00, 0x08, 0xF8, 0x0F, 0x00, 0x08, 0x00, 0x08, 0xFF, 0x7F, 0x80, 0x00, 0x84, 0x10, 0x88, 0x09, 0xA0, 0x06, 0x90, 0x04, 0x8C, 0x18, 0xA3, 0x60, 0x40, 0x00}, /*"录",2*/
    {'F', 0x40, 0x00, 0x80, 0x00, 0x80, 0x00, 0xFF, 0x7F, 0x08, 0x08, 0x08, 0x08, 0x10, 0x04, 0x10, 0x04, 0x20, 0x02, 0x40, 0x01, 0x80, 0x00, 0x40, 0x01, 0x20, 0x02, 0x10, 0x04, 0x0C, 0x18, 0x03, 0x60}, /*"文",3*/
    {'F', 0x10, 0x04, 0x10, 0x04, 0x90, 0x04, 0x88, 0x04, 0x88, 0x3F, 0x4C, 0x04, 0x4C, 0x04, 0x2A, 0x04, 0x09, 0x04, 0xE8, 0x7F, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04}, /*"件",4*/
    {'F', 0x00, 0x1F, 0xFC, 0x00, 0x20, 0x00, 0x10, 0x04, 0x08, 0x02, 0xFC, 0x01, 0x80, 0x00, 0x60, 0x08, 0x18, 0x10, 0xFE, 0x3F, 0x80, 0x20, 0x90, 0x04, 0x88, 0x08, 0x84, 0x10, 0xA2, 0x20, 0x40, 0x00}, /*"系",5*/
    {'F', 0x08, 0x02, 0x08, 0x04, 0x04, 0x04, 0xC4, 0x7F, 0x12, 0x02, 0x1F, 0x11, 0x88, 0x20, 0xC4, 0x7F, 0x02, 0x49, 0x1F, 0x09, 0x02, 0x09, 0x00, 0x09, 0x98, 0x48, 0x87, 0x48, 0x42, 0x70, 0x20, 0x00}, /*"统",6*/
    {'F', 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x3E, 0x7F, 0x22, 0x48, 0x22, 0x48, 0x22, 0x48, 0x22, 0x48, 0x22, 0x48, 0x22, 0x48, 0x22, 0x48, 0x22, 0x44, 0x22, 0x44, 0x3E, 0x52, 0x22, 0x21, 0x00}, /*"加",7*/
    {'F', 0x10, 0x04, 0x10, 0x14, 0xFE, 0x24, 0x10, 0x04, 0xFF, 0x7F, 0x08, 0x04, 0x08, 0x24, 0xFF, 0x24, 0x04, 0x24, 0x12, 0x14, 0xFE, 0x14, 0x10, 0x08, 0xF0, 0x48, 0x1F, 0x54, 0x10, 0x62, 0x10, 0x41}, /*"载",8*/
    {'F', 0x80, 0x00, 0x88, 0x00, 0x88, 0x00, 0x88, 0x00, 0xFC, 0x1F, 0x84, 0x00, 0x82, 0x00, 0x80, 0x00, 0xFF, 0x7F, 0x40, 0x01, 0x20, 0x02, 0x20, 0x02, 0x10, 0x04, 0x08, 0x08, 0x04, 0x10, 0x03, 0x60}, /*"失",9*/
    {'F', 0x00, 0x02, 0x3E, 0x02, 0x22, 0x02, 0x2A, 0x01, 0x2A, 0x7F, 0xAA, 0x10, 0x6A, 0x11, 0x2A, 0x11, 0x2A, 0x11, 0x2A, 0x0A, 0x2A, 0x0A, 0x08, 0x04, 0x14, 0x0A, 0x24, 0x11, 0xA2, 0x20, 0x41, 0x40}, /*"败",10*/
    {'F', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00}, /*"，",11*/
    {'F', 0x00, 0x02, 0x02, 0x02, 0xE4, 0x3F, 0x04, 0x02, 0xC0, 0x1F, 0x00, 0x02, 0xE7, 0x7F, 0x04, 0x00, 0xC4, 0x1F, 0x44, 0x10, 0xC4, 0x1F, 0x44, 0x10, 0xD4, 0x1F, 0x4C, 0x10, 0x44, 0x14, 0x40, 0x08}, /*"请",12*/
    {'F', 0x08, 0x02, 0x08, 0x04, 0x08, 0x04, 0xC8, 0x7F, 0x5F, 0x40, 0x28, 0x22, 0x08, 0x02, 0xD8, 0x7F, 0x0C, 0x11, 0x0B, 0x11, 0x88, 0x10, 0x08, 0x0B, 0x08, 0x04, 0x08, 0x0A, 0x0A, 0x11, 0xC4, 0x20}, /*"按",13*/
    {'F', 0x10, 0x04, 0x92, 0x04, 0x54, 0x04, 0x10, 0x7C, 0xFF, 0x22, 0x54, 0x22, 0x92, 0x22, 0x11, 0x25, 0x08, 0x14, 0x7F, 0x14, 0x44, 0x08, 0x42, 0x08, 0x26, 0x14, 0x18, 0x14, 0x2C, 0x22, 0x43, 0x41}, /*"数",14*/
    {'F', 0x40, 0x00, 0x80, 0x00, 0xFE, 0x7F, 0x02, 0x40, 0x01, 0x20, 0xF8, 0x07, 0x00, 0x02, 0x00, 0x01, 0x80, 0x00, 0xFF, 0x7F, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0xA0, 0x00, 0x40, 0x00}, /*"字",15*/
    {'F', 0x04, 0x08, 0x04, 0x08, 0xDC, 0x3E, 0x84, 0x28, 0x82, 0x7F, 0x5E, 0x28, 0x45, 0x3E, 0xE4, 0x08, 0x9F, 0x3E, 0xA4, 0x08, 0xA4, 0x7F, 0x44, 0x08, 0x54, 0x08, 0xAC, 0x00, 0x14, 0x7F, 0x00, 0x00}, /*"键",16*/
    {'H', 0x00, 0x00, 0x00, 0x10, 0x1C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7C, 0x00, 0x00},                                                                                                 /*"1",17*/
    {'F', 0x00, 0x08, 0x00, 0x1F, 0xFC, 0x00, 0x80, 0x00, 0xFF, 0x7F, 0x80, 0x00, 0xF8, 0x0F, 0x88, 0x08, 0xF8, 0x0F, 0x88, 0x08, 0xF8, 0x0F, 0x80, 0x00, 0xFC, 0x1F, 0x80, 0x00, 0xFF, 0x7F, 0x00, 0x00}, /*"重",18*/
    {'F', 0x08, 0x00, 0x10, 0x20, 0xFE, 0x1E, 0x00, 0x02, 0x44, 0x02, 0x28, 0x02, 0xFF, 0x7E, 0x10, 0x12, 0x10, 0x12, 0xFE, 0x12, 0x10, 0x12, 0x54, 0x12, 0x92, 0x12, 0x11, 0x11, 0x14, 0x11, 0x88, 0x10}, /*"新",19*/
    {'F', 0x08, 0x01, 0x08, 0x01, 0x08, 0x1F, 0x88, 0x10, 0xDF, 0x08, 0x28, 0x05, 0x0C, 0x02, 0x1C, 0x05, 0xAA, 0x18, 0x4A, 0x60, 0xA9, 0x1F, 0x88, 0x10, 0x88, 0x10, 0x88, 0x10, 0x88, 0x1F, 0x88, 0x10}, /*"格",20*/
    {'F', 0x00, 0x12, 0x00, 0x22, 0x00, 0x22, 0x00, 0x02, 0xFF, 0x7F, 0x00, 0x02, 0x00, 0x02, 0x7C, 0x02, 0x10, 0x02, 0x10, 0x02, 0x10, 0x04, 0x10, 0x44, 0xF0, 0x48, 0x1E, 0x50, 0x04, 0x60, 0x00, 0x40}, /*"式",21*/
    {'F', 0x10, 0x01, 0x10, 0x01, 0x10, 0x21, 0x08, 0x11, 0x08, 0x09, 0x0C, 0x05, 0x0C, 0x03, 0x0A, 0x01, 0x89, 0x01, 0x48, 0x01, 0x28, 0x01, 0x08, 0x41, 0x08, 0x41, 0x08, 0x41, 0x08, 0x7E, 0x08, 0x00}, /*"化",22*/
    {'F', 0x08, 0x00, 0xC8, 0x1F, 0x48, 0x10, 0x48, 0x10, 0xDF, 0x1F, 0x48, 0x10, 0x4C, 0x10, 0xDC, 0x1F, 0x6A, 0x22, 0x4A, 0x12, 0x49, 0x0C, 0x48, 0x04, 0x48, 0x08, 0x48, 0x11, 0xC8, 0x60, 0x48, 0x00}, /*"根",23*/
    {'F', 0x00, 0x00, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10}, /*"目",24*/
    {'F', 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x08, 0x00, 0x08, 0xF8, 0x0F, 0x00, 0x08, 0x00, 0x08, 0xFF, 0x7F, 0x80, 0x00, 0x84, 0x10, 0x88, 0x09, 0xA0, 0x06, 0x90, 0x04, 0x8C, 0x18, 0xA3, 0x60, 0x40, 0x00}, /*"录",25*/
    {'F', 0x40, 0x00, 0x80, 0x00, 0x80, 0x00, 0xFF, 0x7F, 0x08, 0x08, 0x08, 0x08, 0x10, 0x04, 0x10, 0x04, 0x20, 0x02, 0x40, 0x01, 0x80, 0x00, 0x40, 0x01, 0x20, 0x02, 0x10, 0x04, 0x0C, 0x18, 0x03, 0x60}, /*"文",26*/
    {'F', 0x10, 0x04, 0x10, 0x04, 0x90, 0x04, 0x88, 0x04, 0x88, 0x3F, 0x4C, 0x04, 0x4C, 0x04, 0x2A, 0x04, 0x09, 0x04, 0xE8, 0x7F, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04}, /*"件",27*/
    {'F', 0x00, 0x1F, 0xFC, 0x00, 0x20, 0x00, 0x10, 0x04, 0x08, 0x02, 0xFC, 0x01, 0x80, 0x00, 0x60, 0x08, 0x18, 0x10, 0xFE, 0x3F, 0x80, 0x20, 0x90, 0x04, 0x88, 0x08, 0x84, 0x10, 0xA2, 0x20, 0x40, 0x00}, /*"系",28*/
    {'F', 0x08, 0x02, 0x08, 0x04, 0x04, 0x04, 0xC4, 0x7F, 0x12, 0x02, 0x1F, 0x11, 0x88, 0x20, 0xC4, 0x7F, 0x02, 0x49, 0x1F, 0x09, 0x02, 0x09, 0x00, 0x09, 0x98, 0x48, 0x87, 0x48, 0x42, 0x70, 0x20, 0x00}, /*"统",29*/
    {'F', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00}, /*"，",30*/
    {'F', 0x08, 0x08, 0x10, 0x08, 0x10, 0x04, 0x00, 0x00, 0xFE, 0x3F, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0xFF, 0x7F, 0x10, 0x04, 0x10, 0x04, 0x08, 0x04, 0x08, 0x04, 0x04, 0x04, 0x02, 0x04}, /*"并",31*/
    {'F', 0x10, 0x01, 0x10, 0x1F, 0x90, 0x10, 0x52, 0x08, 0x14, 0x05, 0x14, 0x02, 0x10, 0x09, 0xD0, 0x08, 0x18, 0x08, 0xD4, 0x7F, 0x13, 0x08, 0x90, 0x08, 0x10, 0x09, 0x10, 0x08, 0x10, 0x0A, 0x10, 0x04}, /*"将",32*/
    {'F', 0x00, 0x1F, 0xFC, 0x00, 0x20, 0x00, 0x10, 0x04, 0x08, 0x02, 0xFC, 0x01, 0x80, 0x00, 0x60, 0x08, 0x18, 0x10, 0xFE, 0x3F, 0x80, 0x20, 0x90, 0x04, 0x88, 0x08, 0x84, 0x10, 0xA2, 0x20, 0x40, 0x00}, /*"系",33*/
    {'F', 0x08, 0x02, 0x08, 0x04, 0x04, 0x04, 0xC4, 0x7F, 0x12, 0x02, 0x1F, 0x11, 0x88, 0x20, 0xC4, 0x7F, 0x02, 0x49, 0x1F, 0x09, 0x02, 0x09, 0x00, 0x09, 0x98, 0x48, 0x87, 0x48, 0x42, 0x70, 0x20, 0x00}, /*"统",34*/
    {'F', 0x40, 0x00, 0x80, 0x00, 0x80, 0x00, 0xFF, 0x7F, 0x08, 0x08, 0x08, 0x08, 0x10, 0x04, 0x10, 0x04, 0x20, 0x02, 0x40, 0x01, 0x80, 0x00, 0x40, 0x01, 0x20, 0x02, 0x10, 0x04, 0x0C, 0x18, 0x03, 0x60}, /*"文",35*/
    {'F', 0x10, 0x04, 0x10, 0x04, 0x90, 0x04, 0x88, 0x04, 0x88, 0x3F, 0x4C, 0x04, 0x4C, 0x04, 0x2A, 0x04, 0x09, 0x04, 0xE8, 0x7F, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04}, /*"件",36*/
    {'F', 0x08, 0x02, 0x08, 0x22, 0x88, 0x2F, 0x08, 0x12, 0x3F, 0x0A, 0xC8, 0x7F, 0x08, 0x02, 0x28, 0x01, 0x98, 0x7F, 0x4C, 0x02, 0x2B, 0x01, 0x08, 0x3F, 0x08, 0x20, 0x08, 0x20, 0x0A, 0x14, 0x04, 0x08}, /*"拷",39*/
    {'F', 0x00, 0x00, 0xF8, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x88, 0x08, 0x88, 0x08, 0x88, 0x08, 0x88, 0x08, 0x88, 0x08, 0x48, 0x08, 0x40, 0x01, 0x20, 0x02, 0x10, 0x04, 0x08, 0x08, 0x04, 0x10}, /*"贝",40*/
    {'F', 0x00, 0x00, 0xFE, 0x3F, 0x40, 0x00, 0x20, 0x00, 0x10, 0x04, 0x08, 0x08, 0xFC, 0x1F, 0x00, 0x10, 0x80, 0x00, 0x80, 0x00, 0xFC, 0x1F, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0xFF, 0x7F, 0x00, 0x00}, /*"至",41*/
    {'F', 0x08, 0x00, 0xC8, 0x1F, 0x48, 0x10, 0x48, 0x10, 0xDF, 0x1F, 0x48, 0x10, 0x4C, 0x10, 0xDC, 0x1F, 0x6A, 0x22, 0x4A, 0x12, 0x49, 0x0C, 0x48, 0x04, 0x48, 0x08, 0x48, 0x11, 0xC8, 0x60, 0x48, 0x00}, /*"根",42*/
    {'F', 0x00, 0x00, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10}, /*"目",43*/
    {'F', 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x08, 0x00, 0x08, 0xF8, 0x0F, 0x00, 0x08, 0x00, 0x08, 0xFF, 0x7F, 0x80, 0x00, 0x84, 0x10, 0x88, 0x09, 0xA0, 0x06, 0x90, 0x04, 0x8C, 0x18, 0xA3, 0x60, 0x40, 0x00}, /*"录",44*/
    {'F', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x24, 0x00, 0x24, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"。",45*/

};

const unsigned char HzString3[3][33] = {

    {'F', 0x00, 0x02, 0x44, 0x02, 0x48, 0x02, 0xC8, 0x1F, 0x20, 0x02, 0x00, 0x02, 0xEF, 0x3F, 0x88, 0x04, 0x88, 0x04, 0x88, 0x04, 0x48, 0x24, 0x48, 0x24, 0x28, 0x38, 0x14, 0x00, 0xE2, 0x7F, 0x00, 0x00}, /*"选",1*/
    {'F', 0x00, 0x00, 0x80, 0x7F, 0x00, 0x04, 0x3F, 0x02, 0x88, 0x3F, 0x88, 0x20, 0x88, 0x24, 0x88, 0x24, 0x88, 0x24, 0x88, 0x24, 0x88, 0x24, 0xB8, 0x22, 0x07, 0x0A, 0x02, 0x11, 0x80, 0x20, 0x40, 0x40}, /*"项",2*/
    {'F', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"：",3*/

};

const unsigned char HzString4[9][33] = {
    {'F', 0x00, 0x00, 0x80, 0x3F, 0x80, 0x1F, 0x80, 0x0F, 0x80, 0x07, 0x80, 0x07, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x07, 0x80, 0x07, 0x80, 0x0F, 0x80, 0x1F, 0x80, 0x3F, 0x00, 0x00}, /*"【",0*/
    {'H', 0x00, 0x00, 0x00, 0x10, 0x1C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7C, 0x00, 0x00},                                                                                                 /*"1",1*/
    {'F', 0x00, 0x00, 0xFC, 0x01, 0xF8, 0x01, 0xF0, 0x01, 0xE0, 0x01, 0xE0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xE0, 0x01, 0xE0, 0x01, 0xF0, 0x01, 0xF8, 0x01, 0xFC, 0x01, 0x00, 0x00}, /*"】",2*/
    {'F', 0x08, 0x01, 0x08, 0x01, 0x08, 0x1F, 0x88, 0x10, 0xDF, 0x08, 0x28, 0x05, 0x0C, 0x02, 0x1C, 0x05, 0xAA, 0x18, 0x4A, 0x60, 0xA9, 0x1F, 0x88, 0x10, 0x88, 0x10, 0x88, 0x10, 0x88, 0x1F, 0x88, 0x10}, /*"格",3*/
    {'F', 0x00, 0x12, 0x00, 0x22, 0x00, 0x22, 0x00, 0x02, 0xFF, 0x7F, 0x00, 0x02, 0x00, 0x02, 0x7C, 0x02, 0x10, 0x02, 0x10, 0x02, 0x10, 0x04, 0x10, 0x44, 0xF0, 0x48, 0x1E, 0x50, 0x04, 0x60, 0x00, 0x40}, /*"式",4*/
    {'F', 0x10, 0x01, 0x10, 0x01, 0x10, 0x21, 0x08, 0x11, 0x08, 0x09, 0x0C, 0x05, 0x0C, 0x03, 0x0A, 0x01, 0x89, 0x01, 0x48, 0x01, 0x28, 0x01, 0x08, 0x41, 0x08, 0x41, 0x08, 0x41, 0x08, 0x7E, 0x08, 0x00}, /*"化",5*/
    {'F', 0x08, 0x00, 0xC8, 0x1F, 0x48, 0x10, 0x48, 0x10, 0xDF, 0x1F, 0x48, 0x10, 0x4C, 0x10, 0xDC, 0x1F, 0x6A, 0x22, 0x4A, 0x12, 0x49, 0x0C, 0x48, 0x04, 0x48, 0x08, 0x48, 0x11, 0xC8, 0x60, 0x48, 0x00}, /*"根",6*/
    {'F', 0x00, 0x00, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0x10, 0xFC, 0x1F, 0x04, 0x10}, /*"目",7*/
    {'F', 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x08, 0x00, 0x08, 0xF8, 0x0F, 0x00, 0x08, 0x00, 0x08, 0xFF, 0x7F, 0x80, 0x00, 0x84, 0x10, 0x88, 0x09, 0xA0, 0x06, 0x90, 0x04, 0x8C, 0x18, 0xA3, 0x60, 0x40, 0x00}, /*"录",8*/
};

const unsigned char HzString5[2][33] = {
    {'F', 0x40, 0x00, 0x80, 0x00, 0xFE, 0x7F, 0x02, 0x40, 0x01, 0x20, 0xF8, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x3F, 0x20, 0x02, 0x20, 0x02, 0x20, 0x02, 0x10, 0x22, 0x10, 0x22, 0x08, 0x22, 0x06, 0x3C}, /*"完",0*/
    {'F', 0x00, 0x0A, 0x00, 0x12, 0x00, 0x02, 0xFC, 0x7F, 0x04, 0x02, 0x04, 0x02, 0x04, 0x22, 0x7C, 0x22, 0x44, 0x22, 0x44, 0x14, 0x44, 0x14, 0x44, 0x48, 0x54, 0x4C, 0x22, 0x52, 0x02, 0x61, 0x81, 0x40}, /*"成",1*/
};

#endif