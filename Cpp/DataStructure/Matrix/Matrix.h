/**
 * 行列ライブラリ
 */
struct Matrix {
    typedef double D;
    vector<valarray<D>> d;
    int N, M;
    Matrix(int N, int M) : N(N), M(M) {
        d.resize(N);
        for (int i = 0; i < N; i++) {
            d[i] = valarray<D>(D(0), M);
        }
    }

    valarray<D>& operator[](int p) {
        return d[p];
    }
    
    const valarray<D>& operator[](int p) const {
        return d[p];
    }
    
    Matrix& operator=(const Matrix &other) {
        assert(other.N == N && other.M == M);
        copy_n(other.d.begin(), N, d.begin());
        return *this;
    }

    Matrix operator+(const Matrix &right) {
        assert(right.N == N && right.M == M);
        Matrix res(N, M);
        for (int i = 0; i < N; i++) {
            res[i] = (d[i]+right[i]);
        }
        return res;
    }
    
    Matrix operator*(const Matrix &right) {
        assert(M == right.N);
        Matrix res(N, right.M), r(right.M, right.N);
        for (int i = 0; i < right.M; i++) {
            for (int j = 0; j < right.N; j++) {
                r[i][j] = right[j][i]; 
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < right.M; j++) {
                res[i][j] = (d[i]*r[j]).sum();
            }
        }
        return res;
    }

    Matrix operator*(const D x) {
        Matrix res(N, M);
        for (int i = 0; i < N; i++) {
            res[i] = d[i]*x;
        }
        return res;
    }

    Matrix pow(ll p) {
        assert(N == M);
        Matrix res(N, M), buf = *this;
        for (int i = 0; i < N; i++) res[i][i] = D(1);
        while(p != 0) {
            if (p % 2) {
                res = res*buf;
            }
            p /= 2;
            buf = buf*buf;
        }
        return res;
    }
    
    void mulL(int i, D x) {
        d[i] *= x;
    }
    
    void excL(int i, int j) {
        swap(d[i], d[j]);
    }
    //line i -> i+(j*x)
    void addL(int i, int j, D x) {
        d[i] += d[j]*x;
    }
    
    int inverse() {
        assert(N == M);
        Matrix r(N, N);
        for (int i = 0; i < N; i++) r[i][i] = D(1);
        for (int i = 0; i < N; i++) {
            if (sgn(d[i][i]) == 0) {
                int j;
                for (j = i+1; j < N; j++) {
                    if (sgn(d[i][j])) {
                        r.excL(i, j);
                        excL(i, j);
                        break;
                    }
                }
                if (j == N) return i;
            }
            r.mulL(i, 1/d[i][i]);
            mulL(i, 1/d[i][i]);
            for (int j = 0; j < N; j++) {
                if (i == j) continue;
                r.addL(j, i, -d[j][i]);
                addL(j, i, -d[j][i]);
            }
        }
        *this = r;
        return N;
    }
};