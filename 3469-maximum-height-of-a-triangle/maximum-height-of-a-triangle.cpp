class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int heightWithRedTop = 0;
        int redLeft = red;
        int blueLeft = blue;
        int i = 1;
        
        while (true) {
            if (i % 2 != 0) {
                if (redLeft >= i) {
                    redLeft -= i;
                    heightWithRedTop++;
                } else {
                    break;
                }
            } else {
                if (blueLeft >= i) {
                    blueLeft -= i;
                    heightWithRedTop++;
                } else {
                    break;
                }
            }
            i++;
        }

        int heightWithBlueTop = 0;
        redLeft = red;
        blueLeft = blue;
        i = 1;
        
        while (true) {
            if (i % 2 != 0) {
                if (blueLeft >= i) {
                    blueLeft -= i;
                    heightWithBlueTop++;
                } else {
                    break;
                }
            } else {
                if (redLeft >= i) {
                    redLeft -= i;
                    heightWithBlueTop++;
                } else {
                    break;
                }
            }
            i++;
        }

        return max(heightWithRedTop, heightWithBlueTop);
    }
};
