#include "../inc/SIModel.class.hpp"

Model::Model(int nrows, int ncols)
: m_nrows(nrows), m_ncols(ncols)
{
    board = new GameObject*[m_ncols * m_nrows];
    

}