//จอTFT
#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();
#include "TFT_A.h"

//วัดระยะ
#include <Wire.h>
#include <VL53L0X.h>
VL53L0X sensor;

//นับการทำงาน
long elapsedTime = 0; //นับเวลาการทำงาน
long nowTime = 0;     //นับเวลาการทำงาน

//แกน
const int MPU_addr = 0x68; // I2C address of the MPU-6050
int16_t AcX, AcY, AcZ, Tmp, GyX, GyY, GyZ;


#include <DFRobot_MAX30102.h>         //วัดหัวใจ/ออกซิเจน
DFRobot_MAX30102 particleSensor;
int32_t SPO2; //SPO2
int8_t SPO2Valid; //Flag to display if SPO2 calculation is valid
int32_t heartRate; //Heart-rate
int8_t heartRateValid; //Flag to display if heart-rate calculation is valid 
#include"max30102_A.h"


//ลำโพง
#include "SoundData.h"
#include "XT_DAC_Audio.h"

XT_Wav_Class ForceWithYou(Force);     // create an object of type XT_Wav_Class that is used by

XT_DAC_Audio_Class DacAudio(26, 0);   // Create the main player class object.
                                      // Use GPIO 25, one of the 2 DAC pins and timer 0







                                    
