/*************************************************************
	������������ ������� �2. 
	
	���������� (��������, �����, �����)
	���������� ���������, ��������� (��������) �������� 
	��������� ���������.
							
*************************************************************/

#include <iostream>


#define	  stop __asm nop	//� ������� ��������� ������������� ������ ����������������
/***************************************************************/
int main()
{
// ********************************************************
	//������� 1. �������� ���������� if-else.������������� switch 

	//������� 1.1 �������� �������� ����, ������� ��������� ��� �������, 
	//���������� � ���������� ch � ��������������� �������.
	//��������� ������������� �������� ��������, ����� ������������ ���� �����
	//��� ����� ������ �������, ������� ������ �� �������������

	//���������: �������� ������ � ��������� ����������� ��������, ��� �������� � �������
	// ����� ASCII ��� ������ ����� ������� �������� �� 0x20 ������ ���� 
	// ��������������� ����� �������� ��������.
	
	//�������� ��������, ��� � ������������ ������� ����� ������� �������� � ������� �������� 
        //����������� ��������� ���� �������
#if 0
	{
		// ����������� �������� ���������� ch � ������� ������ �����
		
		char ch;

		std::cout << "Enter any symbol, please: ";
		std::cin >> ch;

		if (ch >= 65 && ch <= 90)
		{
			ch += 32;
			std::cout << ch;
		}
		else if (ch >= 97 && ch <= 122)
		{
			ch -= 32;
			std::cout << ch;
		}
		else
		{
			std::cout << "Error. You entered an invalid symbol." << std::endl;
		}

		// ����� ��������� � ��������� �������� ��� ������ "���" �� �����
		stop
	}
#endif
	//������� 1.2 �������� �������� ����, ������� ��������� � ������� if (if/else)
	//��������� ������: 
	//���� x ������ ��� ����� 0, y=0
	//���� x ������ 0 �� ������ 1, �� y=x,
	//���� x ������ ��� ����� 1, �� y=1
	//���������: ������ ���� ������ ��� ����� ���� x � y?
#if 0
	{
		double x = 1, y = 0;

		if (x <= 0)
		{
			y = 0;
		}
		else if (x > 0 && x < 1)
		{
			y = x;
		}
		else if (x >= 1)
		{
			y = 1;
		}

		std::cout << y << std::endl;
	stop
	}
#endif
	//������� 1.3 �������� �������� ����, ������� ��������� � ������� switch
	//��������� ������: 
	//� ���������� cInput ���� char ���� �������� �������,���������� ����� ��������.
	//���� ������ ������ 'y' (�.�. yes) � ����� ��������, �� ���������
	//���������� � �������� ���������� x
	//���� ������ ������ 'n' (�.�. no) � ����� ��������, �� ���������
	//���������� � �������� (x * 2)
	//���� ����� ������ �����, �� ������� ��������� �� ������
#if 0
	{
		double x = 2, y = 0;
		char cInput;

		std::cout << "Enter y or n: ";
		std::cin >> cInput;

		switch (cInput)
		{
		case 'y':
		case 'Y':
			y += x;
			std::cout << y << std::endl;
			break;
		case 'n':
		case 'N':
			y = x * 2;
			std::cout << y << std::endl;
			break;
		default:
			std::cout << "Error." << std::endl;
			break;
		}
	stop
	}
#endif
#if 0
// ********************************************************
	//������� 2. ���������� ���������.
	// � ������������� ��������� (������� �� ��� ����������) ���������� ���
	// ������������ �� ���������� ���������: ���������� �������� ������ ��������� ���,
	// �� ������ ����� ���������� �� ��������, ��� ���� ������ 400-� ��� ��� ���� 
	// ����������. �.�. 1823 - �� ����������, 1824 - ����������, 1900 - �� ����������,
	// 2000 - ����������.
	// �������� �������� ����, ����� ���:
	// ���������� ���������� isLeapYear ��������� �������� true, ���� ���, ��������
	// ���������� year - ����������.

	// ����������: �� ���� ������������ ������������ if-else, switch � ��������� ���������� 
	//             ���� �������� ���������� ��������� � ���� ������.
	//(*)���� ��������� ����������� ��� ������� ������, �� ����� ������� ������ �� � ������� if-else,
	// � ����� ��� ��������� ������������ �������.
	{
		int year = 1823;
		//int year = 1824;
		//int year = 1900;
		//int year = 2000;

		//��������� �������� 
		bool isLeapYear = (year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0);
		std::cout << isLeapYear << std::endl;
		// ��������� �������� � ���������
		stop
	}
#endif
#if 0
// *******************************************************
	//������� 3. ��������� ��������.  
	//� ������� ���������� ��������� ������� ������������ �� ���� ��������

	//(*)���� ��������� ����������� ��� ������� ������, �� ����� ������� ������ �� � ������� if-else,
	// � ����� ��� ��������� ������������ �������.
	{
		int a = 20, b = 11, c = 10, max = 0;

		max = (a > b) ? ((a > c) ?  a : c) : ((b > c) ?  b : c);

		std::cout << max;
	stop	
	}
#endif
// ********************************************************
	//������� 4. �����.

	//������� 4.1 �������� �������� ����, ������� ��������� � ������� for
	//��������� ������: ����� ����� ��������� ��������� ����� �����.
	//������� ������� � ������� ������ ����� (��� ����� � ����).
	//������������� ������ �� ����� ������ ������� ������, ��� �������.
#if 0
	{

		//1) ������������ ������� ���������

		//2) ��������� ������������ ��������

		//3) ��������� �����

		//4) ��������� � ��������� �������� (��� ������� �� �������)
		
		int start, end, sum = 0;

		std::cout << "Enter the start of the integer range number: ";
		std::cin >> start;
		std::cout << "Enter the end of the integer range number: ";
		std::cin >> end;

		if (start <= end)
		{
			for (size_t i = start; i <= end; i++)
			{
				sum += i;
			}

			std::cout << sum;
		}
		else
		{
			std::cout << "Error!";
		}
	stop
	}
#endif

	//������� 4.2 �������� �������� ����, ������� ��������� � ������� do-while
	//��������� ������: �� ������ �������� ����� ������ � ������� ����� ��������
	// � �������� ����, ���� �������� ������������� �������: 
	// �������� ������ ��� ����� 10 � ������.

	//���������: �������� �� �������� � �������������� �������� ������� �� �������
	//������ ���������� ����� ������������� ���. ���������� ����������� ��������������
	//�������.
#if 0
	{
		int count = 0;

		do
		{
			std::cout << "Enter integer number: ";
			std::cin >> count;

		} while (!( (count >= 10) && (count & 1) == 0)  ); //���� ������� ��� ����� ����, �� ����� ������
	stop
	}

	//������� 4.3 �������� �������� ����, ������� ��������� � ������� while
	//��������� ������: ������� int x = 0; 
	//�� ������ �������� x=x+1, sum=sum+1/x
	//����� �������� x, ��� ������� sum>1.7
	{
		int x = 0;
		double sum = 0;

		while (sum <= 1.7)
		{
			x += 1;
			sum = sum + 1 / static_cast<double>(x);
		}

		std::cout << x << std::endl;
	stop
	}
#endif
#if 0
// ********************************************************
//������� 5 ��������� ���������� (and, or, xor, not), ������.
	//5.1 
	{
		//�)������� �������� ������ ���� � ������� ������ �����. ���������� �������������� ������������ �����
		size_t num_bit;
		//������������ ��������, ����� ���� ����� ������������. ���� - ������� ���, 7 - �������
		std::cout << "Please, enter bit number: ";
		do
		{
			std::cin >> num_bit; //��������� ���, � ������� ����� ������������� ���������� ��������

			if (!(num_bit >= 0 && num_bit <= 7))
			{
				std::cout << "Error. Please, enter bit number: ";
			}
		} while (!(num_bit >= 0 && num_bit <= 7));

	//�)  � ���������� val �������� �������� ����, ��������� ���������� num_bit
		{
			char val = 0xff;
			unsigned char mask = ~(1 << num_bit);
			char result = val & mask;
			std::cout << std::hex << static_cast<int>(result) << std::dec << std::endl;
		}
	stop
			
	//�)  � ���������� val ���������� �������� ����, ��������� ���������� num_bit	
		{
			char val = 0xAA;
			unsigned char mask = 1 << num_bit;
			bool x = val & mask;
			char result2 = x >> num_bit;
			std::cout << result2 << std::endl;
			stop
		}	
	stop
	//�)	� ���������� val ����������  � 1 �������� ����, ��������� ���������� num_bit	
		{
			char val = 0;
			unsigned char mask = 1 << num_bit;
			char result3 = val | mask;
			std::cout << result3 << std::endl;
		}
	stop
	}
#endif
#if 1
	//5.2 
	{
	//���� ����� ���������� ����� ��� ����� ������, �� �����, 
	//� ����� ������� ����� ������������ � ������ ���������� ��� ���������� �� ������ �����.			
	//� ����������� x86  ������������ ������� �� �������� � �������� (����. little-endian)
	//��� ���������� TCP/IP ����������� �������� ������� �� �������� � �������� (����. big-endian)  
	//������� �������� x, ��������:

		int x = 0xA1B2C3D4;

		x = (x << 24) | (x >> 24) & 0xff | (x << 8) | (x >> 8) & 0xFF00; //����������� ������ & 00FF00, FF00 � �.�.


		std::cout << std::hex << x << std::dec << std::endl;

	//����� ����� � ������ ������� � ������� �� �������� � ��������
	//��������� ������� ����� ���, ����� ��� ��������� � ������ � �������� ������� 
	//(�� �������� � ��������)
	//��������, ���� x= 0xA1B2C3D4, �� ����� ������������ ������� 0xD4C3B2A1
	
	stop
	}
#endif
#if 0
// ********************************************************
	//������� 6 ��������� ���������� (and, or, xor, not), ������.
	//6.1 
	{
		//������� �������� y, ��������, � ������� ������ ����� 
		//��� � ������� ��������� �������� � �������� ��� 16-������ ����

		//� ������� ��������� ���������� � ���������� ������:
		//�������� �������� "y"  �� ������� � �������� ����, ��������:
		// ���� y==9, �� 
		// 0 0 0 0 ...   0 0 1 0 0 1 (���������� �������� ���� ������� �� ���������)

		int value = 0;
		unsigned int mask = 1 << 31;
		std::cout << "Enter your number: ";
		std::cin >> value;

		for (int i = 31; i >= 0; i--)
		{
			int x = value & mask;
			x = x >> i;
			if ((x == 0) || (x == 1))
			{
				std::cout << (x);
			}

			mask = mask >> 1;
		}
		stop
	}
#endif
#if 1
	//6.2
	{
		//�������� �������� "y"  �� ������� � �������� ����, 
		//��������� ���������� ����, ��������:
		// ���� y==9, �� ���������  1 0 0 1

		int value = 0;
		unsigned int mask = 1 << 31;
		std::cout << "Enter your number: ";
		std::cin >> value;

		for (int i = 31; i >= 0; i--)
		{
			int x = value & mask;
			x = x >> i;
			if ((x == 0) || (x == 1))
			{
				std::cout << (x);
			}

			mask = mask >> 1;
		}

	}
#endif
#if 0
	//6.3 (*)
	{
		//���� ����� ����������
		int y;//������� �������� y, ��������, � ������� ������ �����

	//"��������" ��� ������� � ���� ���������� ������, ��������:
	//����:   0100 1111 0000 0000 0110 1111 0000 0010
	//�����:  0000 0000 0000 0000 0000 1111 1111 1111
	//�������� �� ������� ���������� �������� � �������� ���� ( ����� �� ������ �� ��������� ������� ��������)

		stop
	}
	//6.4 (*)
	//����� �������� ������� ��������� � ��������� ���� �������� sNum ���
	//����, ����� ���������� sRes ������� ��������� ��������?
		
	//��������� 1: �������� ��������� ����� �������, ��� � ������ ������ ����������
	//������������ ���� �������� (� ��� ������������� �����) 
	
	//��������� 2: ����������� ��������� xor (�������� ��������������� �����)
	//����� �������� ����� �������� => ���� �������� �������������� ������������
	//� ��� ������, ����� ��� ��������� ��� "�� ������" 
	{
		short sNum = 0x8008;
		short sRes;
		
		//0x7ff7

		//0x8ff8

		//0x0008

		//0x7f08

		//0xf001

		//0x0010

		stop
	}
#endif
//*********************   �������������� �������   ****************************************************
//������� 7 (*)  
// ��������� ������� 1 �� �������� ������ 
// �������� ������� ��������� � ����� "������� (���� ������)_1 (������������ ����)_3.docx"
// ������ ������� ����������� � ��������� �������
// ������������:
// ��� ������� (project), ��������� � �������� ������� ����� ����� �������� � ���� ������� (solution)
//*****************************************************************************************************
	return 0;//��� ���������� ����������
}	// ����� ������� main()
