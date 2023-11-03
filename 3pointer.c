#include <stdio.h>

int main() {
    // Bodybuilding world rankings 1st 2nd 3rd
    char *year1991[] = {"Lee Haney", "Lee Labrada", "Vince Taylor"};
    char *year1992[] = {"Dorian Yates", "Kevin Levrone", "Sonny Schmidt"};
    char *year1993[] = {"Dorian Yates", "Flex Wheeler", "Shawn Ray"};
    char *year1994[] = {"Dorian Yates", "Shawn Ray", "Paul Dillett"};
    char *year1995[] = {"Dorian Yates", "Kevin Levrone", "Nasser El Sonbaty"};
    char *year1996[] = {"Dorian Yates", "Paul Dillett", "Kevin Levrone"};
    char *year1997[] = {"Dorian Yates", "Nasser El Sonbaty", "Shawn Ray"};
    char *year1998[] = {"Ronnie Coleman", "Flex Wheeler", "Kevin Levrone"};
    char *year1999[] = {"Ronnie Coleman", "Flex Wheeler", "Chris Cormier"};
    char *year2000[] = {"Ronnie Coleman", "Kevin Levrone", "Ronnie Coleman"};
    char *year2001[] = {"Ronnie Coleman", "Jay Cutler", "Kevin Levrone"};
    char *year2002[] = {"Ronnie Coleman", "Kevin Levrone", "Ronnie Coleman"};
    char *year2003[] = {"Ronnie Coleman", "Dexter Jackson", "Kevin Levrone"};
    char *year2004[] = {"Ronnie Coleman", "Dexter Jackson", "Gustavo Badell"};
    char *year2005[] = {"Ronnie Coleman", "Gustavo Badell", "Ronnie Coleman"};
    char *year2006[] = {"Jay Cutler", "Ronnie Coleman", "Dexter Jackson"};
    char *year2007[] = {"Jay Cutler", "Victor Martinez", "Dexter Jackson"};
    char *year2008[] = {"Dexter Jackson", "Jay Cutler", "Phil Heath"};
    char *year2009[] = {"Jay Cutler", "Branch Warren", "Dexter Jackson"};
    char *year2010[] = {"Jay Cutler", "Phil Heath", "Kai Greene"};
    char *year2011[] = {"Phil Heath", "Jay Cutler", "Victor Martinez"};
    char *year2012[] = {"Phil Heath", "Kai Greene", "Shawn Rhoden"};
    char *year2013[] = {"Phil Heath", "Kai Greene", "Dennis Wolf"};
    char *year2014[] = {"Phil Heath", "Kai Greene", "Shawn Rhoden"};
    char *year2015[] = {"Phil Heath", "Dexter Jackson", "Mamdouh Elssbiay (Big Ramy)"};
    char *year2016[] = {"Phil Heath", "Shawn Rhoden", "Dexter Jackson"};
    char *year2017[] = {"Phil Heath", "Mamdouh Elssbiay (Big Ramy)", "William Bonac"};
    char *year2018[] = {"Shawn Rhoden", "Phil Heath", "Hadi Choopan"};
    char *year2019[] = {"Brandon Curry", "William Bonac", "Roelly Winklaar"};
    char *year2020[] = {"Mamdouh Elssbiay (Big Ramy)", "Phil Heath", "Hadi Choopan"};
    char *year2021[] = {"Mamdouh Elssbiay (Big Ramy)", "Hadi Choopan", "Brandon Curry"};
    char *year2022[] = {"Mamdouh Elssbiay (Big Ramy)", "William Bonac", "Roelly Winklaar"};
    char *year2023[] = {"Mamdouh Elssbiay (Big Ramy)", "William Bonac", "Hadi Choopan"};

    // Arm wrestling world rankings 1st 2nd 3rd
    char *yearr1991[] = {"Michael White", "Robert Davis", "James Miller"};
    char *yearr1992[] = {"David Johnson", "Mark Wilson", "Paul Smith"};
    char *yearr1993[] = {"John Brown", "Richard Harris", "William Taylor"};
    char *yearr1994[] = {"Michael White", "James Miller", "Robert Davis"};
    char *yearr1995[] = {"John Smith", "David Johnson", "Paul Smith"};
    char *yearr1996[] = {"Mark Wilson", "William Taylor", "Richard Harris"};
    char *yearr1997[] = {"Michael White", "David Johnson", "Paul Smith"};
    char *yearr1998[] = {"John Smith", "James Miller", "Robert Davis"};
    char *yearr1999[] = {"Mark Wilson", "Richard Harris", "William Taylor"};
    char *yearr2000[] = {"John Brown", "Michael White", "David Johnson"};
    char *yearr2001[] = {"James Miller", "Paul Smith", "John Smith"};
    char *yearr2002[] = {"Robert Davis", "William Taylor", "Mark Wilson"};
    char *yearr2003[] = {"Michael White", "David Johnson", "James Miller"};
    char *yearr2004[] = {"Richard Harris", "Paul Smith", "John Smith"};
    char *yearr2005[] = {"Mark Wilson", "William Taylor", "Robert Davis"};
    char *yearr2006[] = {"John Brown", "Michael White", "David Johnson"};
    char *yearr2007[] = {"James Miller", "Paul Smith", "John Smith"};
    char *yearr2008[] = {"Richard Harris", "Robert Davis", "Mark Wilson"};
    char *yearr2009[] = {"William Taylor", "David Johnson", "Michael White"};
    char *yearr2010[] = {"Paul Smith", "John Smith", "James Miller"};
    char *yearr2011[] = {"Mark Wilson", "Robert Davis", "John Brown"};
    char *yearr2012[] = {"Michael White", "David Johnson", "William Taylor"};
    char *yearr2013[] = {"Richard Harris", "Paul Smith", "James Miller"};
    char *yearr2014[] = {"John Smith", "Robert Davis", "Mark Wilson"};
    char *yearr2015[] = {"David Johnson", "Michael White", "Paul Smith"};
    char *yearr2016[] = {"William Taylor", "Richard Harris", "John Brown"};
    char *yearr2017[] = {"James Miller", "Robert Davis", "Mark Wilson"};
    char *yearr2018[] = {"Michael White", "David Johnson", "John Smith"};
    char *yearr2019[] = {"Paul Smith", "Richard Harris", "William Taylor"};
    char *yearr2020[] = {"Mark Wilson", "James Miller", "Robert Davis"};
    char *yearr2021[] = {"David Johnson", "John Brown", "Michael White"};
    char *yearr2022[] = {"Robert Davis", "William Taylor", "Paul Smith"};
    char *yearr2023[] = {"John Smith", "Richard Harris", "Mark Wilson"};

    char **armWrestlingWinners[] = {
            yearr1991, yearr1992, yearr1993, yearr1994, yearr1995, yearr1996, yearr1997, yearr1998, yearr1999, yearr2000,
            yearr2001, yearr2002, yearr2003, yearr2004, yearr2005, yearr2006, yearr2007, yearr2008, yearr2009, yearr2010,
            yearr2011, yearr2012, yearr2013, yearr2014, yearr2015, yearr2016, yearr2017, yearr2018, yearr2019, yearr2020,
            yearr2021, yearr2022, yearr2023
    };

    char **bodybuildingWinners[] = {
           year1991, year1992, year1993, year1994, year1995, year1996, year1997, year1998, year1999,
            year2000, year2001, year2002, year2003, year2004, year2005, year2006, year2007, year2008, year2009,
            year2010, year2011, year2012, year2013, year2014, year2015, year2016, year2017, year2018, year2019,
            year2020, year2021, year2022, year2023
    };

    char ****winners[] = {armWrestlingWinners, bodybuildingWinners};

    int discipline;
    printf("Select 0 for Arm Wrestling Winners, 1 for Bodybuilding Winners: ");
    scanf("%d", &discipline);

    int ee;
    printf("Select a year between 1991 and 2023: ");
    scanf("%d", &ee);

    int place;
    printf("Select 1st, 2nd, or 3rd place: ");
    scanf("%d", &place);

    printf("%s\n", winners[discipline][ee - 1991][place - 1]);

    return 0;
}
