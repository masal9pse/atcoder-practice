void main() {
  final isStructured1 = (48 & 0xf0) == 0x30;
  final isStructured2 = (49 & 0xf0) == 0x30;
  final isStructured3 = (50 & 0xf0) == 0x30;
  final isStructured4 = (38 & 0xf0) == 0x30;
  
  final islight_Structured1 = (32 & 0xf0) == 0x30;
  final islight_Structured2 = (34 & 0xf0) == 0x30;
  
  print(isStructured1);
  print(isStructured2);
  print(isStructured3);
  print(isStructured4);
  print(islight_Structured1);
  print(islight_Structured2);
  print("-----------------");
  
  final offset1 = 48 & 0x0f;
  final offset2 = 49 & 0x0f;
  final offset3 = 50 & 0x0f;
  final offset4 = 38 & 0x0f;
  print(offset1);
  print(offset2);
  print(offset3);
  print(offset4);
  print("-----------------");
  final total1 = (34 >> 4) + 1;
  final total2 = (17 >> 4) + 1;
  // 軽自動車
  final total3 = (179 >> 4) + 1;
  print(total1);
  print(total2);
  print(total3);
}
