﻿#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "cmdtool.h"
#include "client.h"

int main() {
	user *b;
	ol *a;
	daemon(1,1);
	while(1) {
		if(zero()) {
			sleep(3);
			//构建用户数据
			fromSet();
			b=usersSet();
			a=onlines(b);
			
			file(b);

     		srf();

			getSum(b);

			//检查流量超出,在线,更新
			oli(b, a->next);
			monitor(b);		
			
			//释放数据
			freelist(b, a);
		}else{
			sleep(5);
		}
	}
	return 0;
}