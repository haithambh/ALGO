#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// هذه الدالة تستقبل عددًا صحيحًا N وتخصص ذاكرة لسلسلة نصية من الحجم N+1
// ثم تطلب من المستخدم إدخال النص وتعيد النص الذي أدخله.
char *ChargerChaine(int N) {
    char *chaine = (char*)malloc(N+1); // تخصيص ذاكرة لحفظ النص
    printf("Veuillez saisir la chaine:\n");
    fgets(chaine, N, stdin); // قراءة النص من المستخدم (يدعم المسافات)
    chaine[strcspn(chaine, "\n")] = '\0'; // إزالة رمز السطر الجديد "\n" إذا كان موجودًا
    return chaine;
}

// هذه الدالة تستقبل مؤشرًا إلى سلسلة نصية وتعطي الطول الفعلي للسلسلة.
int Longueur(char *ch) {
    return strlen(ch); // استخدام الدالة المدمجة strlen لحساب الطول
}

// هذه الدالة تنسخ محتويات السلسلة النصية p إلى المصفوفة Tab.
void ChargerTab(char *p, char Tab[]) {
    strcpy(Tab, p); // نسخ النص من السلسلة النصية إلى المصفوفة
}

// هذه الدالة تعكس محتويات المصفوفة Tab وتخزنها في المصفوفة T.
void InverserTab(char Tab[], char T[], int m) {
    for (int i = 0; i < m; i++) {
        T[i] = Tab[m-i-1]; // النسخ بترتيب عكسي
    }
}

// هذه الدالة تعرض محتويات المصفوفة Tab على الشاشة.
void AfficherTab(char Tab[], int m) {
    for (int i = 0; i < m; i++) {
        printf("%c", Tab[i]); // طباعة كل عنصر من عناصر المصفوفة
    }
    printf("\n"); // الانتقال إلى سطر جديد بعد الطباعة
}

int main() {
    int n;
    // طلب حجم السلسلة النصية من المستخدم
    printf("Veuillez saisir la taille maximale de la chaine:\n");
    scanf("%d", &n);
    getchar(); // إزالة الحرف المتبقي في المخزن المؤقت (newline)

    // استدعاء الدالة لتحميل السلسلة النصية من المستخدم
    char *ch = ChargerChaine(n);

    // حساب طول السلسلة النصية الفعلي
    int m = Longueur(ch);

    // تعريف مصفوفتين لحفظ النص الأصلي والنص المعكوس
    char Tab[m], T[m];

    // نسخ النص الأصلي إلى المصفوفة
    ChargerTab(ch, Tab);

    // عرض النص الأصلي
    printf("La chaine originale: \n");
    AfficherTab(Tab, m);

    // عكس النص الأصلي وتخزينه في مصفوفة أخرى
    InverserTab(Tab, T, m);

    // عرض النص المعكوس
    printf("La chaine inversée:\n");
    AfficherTab(T, m);

    // تحرير الذاكرة المخصصة للسلسلة النصية
    free(ch);

    return 0;
}
