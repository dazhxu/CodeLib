

def maxArea(height):
    """
    :type height: List[int]
    :rtype: int
    """
    area = 0
    low = 0
    high = len(height) - 1
    while low < high:
        temp_area = min(height[low],height[high])*(high - low)
        if temp_area > area:
            area = temp_area
        if height[low] < height[high]:
            low += 1
        else:
            high -= 1
    return area

height = [28,342,418,485,719,670,878,752,662,994,654,504,929,660,424,\
          855,922,744,600,229,728,33,371,863,561,772,271,178,455,449,\
          426,835,143,845,321,214,867,199,967,881,193,973,386,122,633,\
          810,330,907,906,282,136,986,315,860,849,229,632,473,759,87,922,\
          185,922,418,382,243,632,250,795,599,131,988,924,869,463,558,680,\
          145,465,938,427,954,925,94,814,126,323,798,599,434,885,874,620,\
          159,292,354,755,924,956,550,876,88,890,800,309,705,358,989,850,\
          176,280,629,130,205,724,296,331,399,94,283,186,331,157,806,490]
print maxArea(height)