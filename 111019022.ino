// C++ code
//

// 
byte BtnPin = 12;
byte A;
int Timer;
byte LED_PIN[7] = {3,4,5,6,7,8,9} ;				// a ,b,c,d,e,f,g
byte LED[17][7] ={ {0, 0, 0, 0, 0, 0, 1},
 				   {1, 0, 0, 1, 1, 1, 1},
 				   {0, 0, 1, 0, 0, 1, 0},
  				 {0, 0, 0, 0, 1, 1, 0},
     			 {1, 0, 0, 1, 1, 0, 0},
 				   {0, 1, 0, 0, 1, 0, 0},
  				 {1, 1, 0, 0, 0, 0, 0},
  				 {0, 0, 0, 1, 1, 1, 1},
 				   {0, 0, 0, 0, 0, 0, 0},
  				 {0, 0, 0, 1, 1, 0, 0},
				   {0, 0, 0, 1, 0, 0, 0},
				   {1, 1, 0, 0, 0, 0, 0},
				   {0, 1, 1, 0, 0, 0, 1},
				   {1, 0, 0, 0, 0, 1, 0},
				   {0, 1, 1, 0, 0, 0, 0},
				   {0, 1, 1, 1, 0, 0, 0},
					{1, 1, 1, 1, 1, 1, 1}};
  					



void setup()
{
  
  for(int i = 0 ; i< 7 ;i++)
  {
    pinMode(LED_PIN[i] , OUTPUT);
  }
    pinMode(BtnPin , INPUT_PULLUP);
  
}



void loop()
{
  
  A = digitalRead(BtnPin);
  for(byte i = 0 ; i < 16 ;i++)
  {
    A = digitalRead(BtnPin);
    for(byte j = 0 ; j < 7 ;j++)
    {
          if(A== HIGH)
          {
              digitalWrite(LED_PIN[j] ,LED[i][j] );
          }
          else
          {
              digitalWrite(LED_PIN[j] ,LED[16][j]);
          }
          
    }
    
    delay(1000);
    
  }
    
 
}

