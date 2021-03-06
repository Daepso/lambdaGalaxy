#ifndef LAMBDAGALAXY_VERTEX
#define LAMBDAGALAXY_VERTEX

#include <Eigen/Geometry>

struct Vertex
{
  Vertex();

  Vertex(const Eigen::Vector3f& pos);

  Eigen::Vector3f position;
  Eigen::Vector3f normal;
  Eigen::Vector2f texcoord;
};

#endif
