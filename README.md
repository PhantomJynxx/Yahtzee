# Yahtzee

Aspects of Yahtzee: (make this a state machine?)
    inputs for amount of players
    Roll upto 5 dice (5D6) at a time
    Have 3 chances to make a match
    Able to pick and choose what die to reroll (default none)
    display potential points?
    13 Rounds
        Score Card:
            Upper: (Bonus: +35 points if the total of the upper section is ≥ 63)
                Aces:   Sum of one
                Twos:   Sum of two
                Threes: Sum of three
                Fours:  Sum of four
                Fives:  Sum of five
                Sixes:  Sum of six
            Lower:
                Chance: Sum of all
                3Kind:  Sum of all
                4Kind:  Sum of all
                FHouse: 25
                4Run:   30
                5Run:   40
                5Kind:  50 [YAHTZEE]
                YBonus: +100 [Joker; Fill an extra score section if able (if none available, section goes to zero)]

META:
    struct Player:
        Name
        D1-5 Value
        D1-5 Hold
        RollCount (Max 3)
        TurnCount (Max 13)
    struct Score:
