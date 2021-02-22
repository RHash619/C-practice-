define F_CPU 16000000UL //16MHz clock

#include <avr/io.h>

#include <util/delay.h>

void dot()

{
	PORTB |= (1<<PORTB5);
	_delay_ms(200); 
	PORTB &= (0<<PORTB5); 
	_delay_ms(200); 
}
void dash()
{
	PORTB |= (1<<PORTB5); 
	_delay_ms(600);
	PORTB &= (0<<PORTB5); 
	_delay_ms(600); 
}
void space()
{
	PORTB &= (0<<PORTB5); // 
	_delay_ms(600); // 
}
void words()
{
	PORTB &= (0<<PORTB5); 
	_delay_ms(1400); //
}
void morse (char s[]) {
	int i = 0;
	while (s[i] != '\0') {

		if (s[i] == 'a' || s[i] == 'A')
		{
			dot(); dash();
			break;
		}
		if (s[i] == 'b' || s[i] =='B')
		{
			dash(); dot(); dot();dot();
			break;
		}

		if (s[i] == 'c' || s[i] == 'C')
		{
			dash(); dot(); dash(); dot();
			break;
		}
		if (s[i] == 'd' || s[i] == 'D')
		{
			dash(); dot(); dot();
			break;
		}
		if (s[i] == 'e' || s[i] =='E')
		{
			dot();
			break;
		}
		if (s[i] == 'f' || s[i] =='F')
		{
			dot(); dot(); dash(); dot();
			break;
		}
		if (s[i] == 'g' || s[i] =='G')
		{
			dash(); dash(); dot()
			break;
		}
		if (s[i] == 'h' || s[i] =='H')
		{
			dot(); dot(); dot(); dot();
			break;
		}
		if (s[i] == 'i' || s[i] =='I')
		{
			dot(); dot();
			break;
		}
		if (s[i] == 'j' || s[i] =='J')
		{
			dot(); dash(); dash(); dash();
			break;
		}
		if (s[i] == 'k' || s[i] =='K')
		{
			dash(); dot(); dash();
			break;
		}
		if (s[i] == 'l' || s[i] =='L')
		{
			dot(); dash(); dot(); dot();
			break;
		}
		if (s[i] == 'm' || s[i] =='M')
		{
			dash(); dash();
			break;
		}
		if (s[i] == 'n' || s[i] =='N')
		{
			dash(); dot();
			break;
		}
		if (s[i] == 'o' || s[i] =='O')
		{
			dash(); dash(); dash();
			break;
		}
		if (s[i] == 'p' || s[i] =='P')
		{
			dot(); dash(); dash(); dot();
			break;
		}
		if (s[i] == 'q' || s[i] =='Q')
		{
			dash(); dash(); dot(); dash();
			break;
		}
		if (s[i] == 'r' || s[i] =='R')
		{
			dot(); dash(); dot();
			break;
		}
		if (s[i] == 's' || s[i] =='S')
		{
			dot(); dot(); dot();
			break;
		}
		if (s[i] == 't' || s[i] =='T')
		{
			dash();
			break;
		}
		if (s[i] == 'u' || s[i] =='U')
		{
			dot(); dot(); dash();
			break;
		}
		if (s[i] == 'v' || s[i] =='V')
		{
			dot(); dot(); dot(); dash();
			break;
		}
		if (s[i] == 'w' || s[i] =='W')
		{
			dot(); dash(); dash();
			break;
		}
		if (s[i] == 'x' || s[i] =='X')
		{
			dash(); dot(); dot(); dash();
			break;
		}
		if (s[i] == 'y' || s[i] =='Y')
		{
			dash(); dot(); dash(); dash();
			break;
		}
		if (s[i] == 'z' || s[i] =='Z')
		{
			dash(); dash(); dot(); dot();
			break;
		}
		if (s[i] == '0')
		{
			dash(); dash(); dash(); dash(); dash();
			break;
		}
		if (s[i] == '1')
		{
			dot(); dash(); dash(); dash(); dash();
			break;
		}
		if (s[i] == '2')
		{
			dot(); dot(); dash(); dash(); dash();
			break;
		}
		if (s[i] == '3')
		{
			dot(); dot(); dot(); dash(); dash();
			break;
		}
		if (s[i] == '4')
		{
			dot(); dot(); dot(); dot(); dash();
			break;
		}

		if (s[i] == '5')
		{
			dot(); dot(); dot(); dot(); dot();
			break;
		}
		if (s[i] == '6')
		{
			dash(); dot(); dot(); dot(); dot();
			break;
		}
		if (s[i] == '7')
		{
			dash(); dash(); dot(); dot(); dot();
			break;
		}
		if (s[i] == '8')
		{
			dash(); dash(); dash(); dot(); dot();
			break;
		}
		if (s[i] == '9')
		{
			dash(); dash(); dash(); dash(); dot();
			break;
		}
		i++;
	}

}
int main (void)
{
	int x = 1;
	while (x == 1){
		char first_name[] = "khalid";
		char last_name[] = "nunow";
		char redID[] = "817817176";
		morse(first_name);
		words();
		morse(last_name);
		words();
		morse(redID);

	}

	

}




