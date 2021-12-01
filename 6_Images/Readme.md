# Output
![output](https://user-images.githubusercontent.com/94236183/144232829-045c5d5a-e01c-4d4a-8a9a-198f69ff35dc.PNG)

GREEN (COM1A1,COM1A0):This selection of pulling up or down is chosen by  CM1A0 and CM1A1 bits

OCR1A (Output Compare Register 1A) is the byte which stores the user chosen value. So if we change OCR1A=180, the controller triggers the change (high) when counter reaches 180 from 0.



## Output Waveform:


![WAveform](https://user-images.githubusercontent.com/94236183/144232889-655f61b6-b1d4-4fa8-8566-051d1aaabd12.PNG)

OCR1A must be 19999-600 for 180 degree and 19999-2400 for 0 degree.

## Clocksheet Bit Description:


![clocksheet](https://user-images.githubusercontent.com/94236183/144233593-964d1df1-138c-424b-a467-489344cabec0.PNG)


## Waveform generation mode bit description:

![sheet](https://user-images.githubusercontent.com/94236183/144233728-0b235994-43a7-46f0-aaf0-0e382ededdf7.PNG)

RED (WGM10-WGM13):are altered to choose waveform generation modes, based on the table below, for fast PWM. We have WGM11, WGM12 and WGM12 are set to 1.
