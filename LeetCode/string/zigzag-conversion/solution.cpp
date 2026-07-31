        for (char ch : s) {
            rows[currentRow] += ch;

            if (currentRow == 0)
                goingDown = true;
            else if (currentRow == numRows - 1)
                goingDown = false;

            if (goingDown)
                currentRow++;
            else
                currentRow--;
        }

        string ans = "";

        for (string row : rows)
            ans += row;

        return ans;
    }
};
