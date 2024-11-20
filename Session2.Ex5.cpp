#include <stdio.h>

int main() {
	int chieu_dai = 6;
	int chieu_rong = 3;
	int chu_vi = (chieu_dai + chieu_rong) * 2;
	int dien_tich = chieu_dai * chieu_rong;
	
	printf("Chu vi cua hinh chu nhat voi chieu dai %d va chieu rong %d là %d", chieu_dai, chieu_rong, chu_vi);
    printf("Dien tich cua hinh chu nhat voi chieu dai %d va chieu rong %d là %d", chieu_dai, chieu_rong, dien_tich);
}
