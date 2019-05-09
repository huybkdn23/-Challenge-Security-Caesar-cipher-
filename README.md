# -Challenge-Security-Caesar-cipher-
# NEOLAB-INTERNSHIP-JOURNEY-2019
Dau tien ham inputString co nhiem vu la nhap vao mot key(buoc nhay), 1<=key<=25. Se co 2 cach nhap bang tay hoac random trong khoang 1->25
dung ham rand().
Sau khi da co key ta tien hanh nhap vao mot chuoi can ma hoa.
Ham inputString co 2 tham chieu input va key de khi goi ham thi 2 gia tri duoc truyen vao se duoc thay doi theo.
Sau khi da co key va input ta tien hanh ma hoa va ham encoding se thuc hien chuc nang do, ham nay tra ve chuoi ouput da duoc ma hoa tu chuoi input. Duyet tat ca cac phan tu co trong chuoi input neu do la ki tu thuong thi tang ki tu do len key don vi (buoc nhay key) roi ep ve kieu char (kieu ki tu) sau do noi ki tu vao chuoi ouput. Neu ki tu do lon hon ki tu 'z' thi tien hanh tru di 26 (bang chu cai co 26 ki tu) de lap lai cac ki tu trong bang chu cai. Tuong tu nhu vay neu ki tu do la ki tu in hoa. Truong hop neu phan tu thu i trong chuoi input khong phai la ki tu chu cai thi giu nguyen.
-------------------------
Trong ham main() srand(time(NULL)); dung de khoi tao mot so ngau nhien theo 1 so seed = time(NULL), time(NULL) tra ve so giay ke tu nga 1/1/1970, ung voi mot so seed se cho ra 1 so ngau nhien khac nhau (phuc vu cho viec sinh random key)
Thuc hien vong lap cho den khi gap ky tu '4' thi dung
