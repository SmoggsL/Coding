struct Vector2D
{
    int x,y;
};
struct Segment
{
    Vector2D start,end;
};
struct Line
{
    int coeffs[3];
};
Vector2D rotate90deg(Vector2D v)
{
    return { v.y , -v.x};
};
Line getline(Segment s);
bool checkCollision(Line a,Line b);
bool checkCollision(Line a, Segment s);
bool checkCollision(Segment a, Segment b);