#include <SFML/Graphics.hpp>

//蛇身的结构体，描述蛇的位置
struct SnakeSegment
{
    SnakeSegment(int x,int y) : position(x,y){};
    sf :: Vector2i position;    
};

//控制方向，None表示在没按下时蛇不会动
enum class Direction {None, Up, Down, Left, Right};

//STL容器构建蛇身
using SnakeContainer = std::vector<SnakeSegment>;

class Snake
{
private:
    void CheckCollision(); //碰撞检测
    SnakeContainer m_SnakeBody; 
    int m_size;
    Direction m_dir;
    int m_speed;
    int m_lives;
    int m_score;
    bool m_lost;
    sf::RectangleShape m_bodyRect;
public:
    Snake(int 1_blocksize); //构造函数
    ~Snake();
    void SetDirection(Direction 1_dir);
    Direction GetDirection();
    sf :: Vector2i GetPosition();
    int GetLives();
    int GetScore();
    int GetSpeed()
    void IncreaseScore();
    bool HasLost();
    void Lose();
    void ToogleLost();
    void Extend();
    void Reset();
    void Move();
    void Tick();
    void Cut(int 1_segments); 
    void Render(sf::RenderWindow& 1_window);
};

Snake::Snake(int 1_blocksize)
{
    m_size = 1_blocksize;
    m_bodyRect.setSize(sf::Vector2f(m_size-1,m_size-1)); //减去一个像素大小保持蛇段在视觉上分离
    Reset();
}

Snake::~Snake() {}

void Snake::Reset()
{
    m_SnakeBody.clear();
    m_SnakeBody.push_back(5,7);
    m_SnakeBody.push_back(5,6);
    m_SnakeBody.push_back(5,5);
    m_speed = 15;
    m_lives = 3;
    m_lost = false;
    m_score = 0;
}

void Snake::SetDirection(Direction l_dir){ m_dir = l_dir; }
Direction Snake::GetDirection(){ return m_dir; }
int Snake::GetSpeed(){ return m_speed; }
int Snake::GetLives(){ return m_lives; }
int Snake::GetScore(){ return m_score; }
void Snake::IncreaseScore(){ m_score += 10; }
bool Snake::HasLost(){ return m_lost; }
void Snake::Lose(){ m_lost = true; }
void Snake::ToggleLost(){ m_lost = !m_lost; }

sf::Vector2i Snake::GetPosition(){
 return (!m_snakeBody.empty() ?
 m_snakeBody.front().position : sf::Vector2i(1,1));
}
