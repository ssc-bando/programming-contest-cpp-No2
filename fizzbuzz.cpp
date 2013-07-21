#include <sstream>

#include "fizzbuzz.h"

/*
 * 配列を用いた処理を実現してみました。
 */
const std::string& fizzbuzz(int n){
	
        /*
		 *1から15までの数字を一つのグループとしたテーブルを作成
		 *(ただし0はこのテーブルのルールには当てはまらないです)
		 *数値の説明は以下の通りです。
		 *	0:fizzでもbuzzでもない
		 *	1:fizz
		 *	2:buzz
		 *	3:fizzbuzz
		 */
        int table[15] = {0,0,1,0,2,1,0,0,1,2,0,1,0,0,3};
        static std::string result("");
        
		//0はグループの例外となるためここで処理をしています
		//「nを文字列化したもの」というルールに沿って
		//result = "0"; は使わないようにしました。
		if(n == 0){
			std::ostringstream num;
			num << n;
			result = num.str();
		}else{
			//負の数値が入力された場合の処理を記述しています。
			if(n < 0){
				n = abs(n);
			}
			//メイン処理(1以上の任意の整数を対象)
			//nの値から1を引いてから15の剰余を計算し、
			//配列tableの添え字としています
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