import java.util.*;
public class CaptureThemAll {
  
  
  /**
   * (-2, -1), (-2, 1), (2, -1), (2, 1), (-1, -2), (1, -2), 
   * (-1, 2) or (1, 2)
   */
  public int[] xDiff = {-2, -2, 2, 2, -1, 1, -1, 1};
  public int[] yDiff = {-1, 1, -1, 1, -2, -2, 2, 2};
  
  class Pos
  {
    int x;
    int y;
    
    public Pos (int xx, int yy)
    {
      x = xx;
      y = yy;
    }
    
    public boolean valid ()
    {
      if (x < 0 || x > 7) return false;
      if (y < 0 || y > 7) return false;
      return true;
    }
  }
   
//this is the required method which takes the position of knight,rook and queen,and gives the minimum path to kill both one after the other.
    public int fastKnight(String knight, String rook, String queen) {
//initial knight,rook and queen position.
      Pos kPos = new Pos (knight.charAt(0) - 'a', knight.charAt(1) - '1');
      Pos rPos = new Pos (rook.charAt(0) - 'a', rook.charAt(1) - '1');
      Pos qPos = new Pos (queen.charAt(0) - 'a', queen.charAt(1) - '1');

//first part:
//this part kills the rook first and then the queen.
        int[][] minKillRookFirst = new int[8][8];
        int[][] minKillQueenSec = new int[8][8];
        for (int i = 0; i < 8; i++)
        {
          for (int j = 0; j < 8; j++)
          {
        minKillRookFirst[i][j] = 100000;
        minKillQueenSec[i][j] = 100000;            
          }
        }
        minKillRookFirst[kPos.x][kPos.y] = 0;
        boolean changed = true;
        while (changed)
        {
          changed = false;
          for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
            {
        //exploring all the moves of the knight i.e (-2, -1), (-2, 1), (2, -1), (2, 1), (-1, -2), (1, -2),(-1, 2) or (1, 2)
              for (int k = 0; k < xDiff.length; k++)
              {
                //tp is the new position of the knight when the knight is at [i][j]
                Pos tP = new Pos(i + xDiff[k], j + yDiff[k]);
                if (tP.valid())
                {
                  //this below if statement will not work untill it encounters the knights initial position,after this happens everytime the shortest distance of each distance gets optimised.
                  //this logic is similar to that of floyd warshalls algorith.
                  if (minKillRookFirst[tP.x][tP.y] + 1 < minKillRookFirst[i][j])
                  {
                    changed = true;
                    //minkillRookFirst[][] array will have the value of shortest path in it for the corresponding i,j.
                    minKillRookFirst[i][j] = minKillRookFirst[tP.x][tP.y] + 1;
                  }
                    
                }
              }
            }
        }
        minKillQueenSec[rPos.x][rPos.y] = 0;
    changed = true;
    while (changed)
    {
      changed = false;
      for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
          for (int k = 0; k < xDiff.length; k++)
          {
            Pos tP = new Pos(i + xDiff[k], j + yDiff[k]);
            if (tP.valid())
            {
              if (minKillQueenSec[tP.x][tP.y] + 1 < minKillQueenSec[i][j])
              {
                changed = true;
                minKillQueenSec[i][j] = minKillQueenSec[tP.x][tP.y] + 1;
              }
                    
            }
          }
        }
    }        
        int v1 = minKillRookFirst[rPos.x][rPos.y] + minKillQueenSec[qPos.x][qPos.y];
//second part:
//this part kills the queen first and then the rook.

    int[][] minKillQueenFirst = new int[8][8];
    int[][] minKillRookSec = new int[8][8];
    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        minKillQueenFirst[i][j] = 100000;
        minKillRookSec[i][j] = 100000;
      }
    }
    minKillQueenFirst[kPos.x][kPos.y] = 0;
    changed = true;
    while (changed)
    {
      changed = false;
      for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
          for (int k = 0; k < xDiff.length; k++)
          {
            Pos tP = new Pos(i + xDiff[k], j + yDiff[k]);
            if (tP.valid())
            {
              if (minKillQueenFirst[tP.x][tP.y] + 1 < minKillQueenFirst[i][j])
              {
                changed = true;
                minKillQueenFirst[i][j] = minKillQueenFirst[tP.x][tP.y] + 1;
              }
                    
            }
          }
        }
    }
    minKillRookSec[qPos.x][qPos.y] = 0;
    changed = true;
    while (changed)
    {
      changed = false;
      for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
          for (int k = 0; k < xDiff.length; k++)
          {
            Pos tP = new Pos(i + xDiff[k], j + yDiff[k]);
            if (tP.valid())
            {
              if (minKillRookSec[tP.x][tP.y] + 1 < minKillRookSec[i][j])
              {
                changed = true;
                minKillRookSec[i][j] = minKillRookSec[tP.x][tP.y] + 1;
              }
                    
            }
          }
        }
    }        
    int v2 = minKillQueenFirst[qPos.x][qPos.y] + minKillRookSec[rPos.x][rPos.y];
    return Math.min (v1, v2);
    }

}
