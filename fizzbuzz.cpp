#include <sstream>

#include "fizzbuzz.h"

/*
 * �z���p�����������������Ă݂܂����B
 */
const std::string& fizzbuzz(int n){
	
        /*
		 *1����15�܂ł̐�������̃O���[�v�Ƃ����e�[�u�����쐬
		 *(������0�͂��̃e�[�u���̃��[���ɂ͓��Ă͂܂�Ȃ��ł�)
		 *���l�̐����͈ȉ��̒ʂ�ł��B
		 *	0:fizz�ł�buzz�ł��Ȃ�
		 *	1:fizz
		 *	2:buzz
		 *	3:fizzbuzz
		 */
        int table[15] = {0,0,1,0,2,1,0,0,1,2,0,1,0,0,3};
        static std::string result("");
        
		//0�̓O���[�v�̗�O�ƂȂ邽�߂����ŏ��������Ă��܂�
		//�un�𕶎��񉻂������́v�Ƃ������[���ɉ�����
		//result = "0"; �͎g��Ȃ��悤�ɂ��܂����B
		if(n == 0){
			std::ostringstream num;
			num << n;
			result = num.str();
		}else{
			//���̐��l�����͂��ꂽ�ꍇ�̏������L�q���Ă��܂��B
			if(n < 0){
				n = abs(n);
			}
			//���C������(1�ȏ�̔C�ӂ̐�����Ώ�)
			//n�̒l����1�������Ă���15�̏�]���v�Z���A
			//�z��table�̓Y�����Ƃ��Ă��܂�
			switch(table[((n-1)%15)]){
				case 0:{
						std::ostringstream num;
						num << n;
						result = num.str();
						  }
						break;
					case 1:
						result = "fizz";
						break;
					case 2:
						result = "buzz";
						break;
					case 3:
						result = "fizzbuzz";
						break;
					default:
						break;
				}
		}
        return result;
}