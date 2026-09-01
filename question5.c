// Incident ID
// Analyst name
// Number of affected systems
// Estimated recovery cost
// Downtime in hours

#include <stdio.h>
#include <string.h>
int main()
{
    char IncidentID[20];
    char Name[50]; 
    int NumberAffected;
    int RecoveryCost;
    float Downtime; //Using float because I believe hours can be in decimals.

    printf(" ==== SECURITY INCIDENT REPORT ==== \n");

    printf("State the Incident ID:\n");
    scanf("%s", IncidentID);

    printf("State your name:\n");
    scanf("%s", Name);

    printf("Number of systems affected were:\n");
    scanf("%d", &NumberAffected);

    printf("Recorvery Cost:\n");
    scanf("%d", &RecoveryCost);

    printf("Number of hours down:\n");
    scanf("%f", &Downtime);

    int TotalCost = RecoveryCost*NumberAffected;

    printf("Incident ID :%c\n", IncidentID);
    printf("Name :%c\n", Name);
    printf("The Number Of Systems Affected :%d\n", NumberAffected);
    printf("Recorvery cost is :%d\n", RecoveryCost);
    printf("Hours down :%.2f hours\n", Downtime); 
    printf("Total Cost:%d\n", TotalCost);

    printf(" ==== END OF INCIDENT REPORT %c ====", IncidentID);

    return 0;
}