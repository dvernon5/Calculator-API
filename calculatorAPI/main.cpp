#include <iostream>
#include <sstream>
#include <crow.h>

double calculationResult(double value1, double value2, int operation)
{
    double total = 0.0;

    switch (operation)
    {
        case 1:
            total = value1 + value2;
            break;
        case 2:
            total = value1 - value2;
            break;
        case 3:
            total = value1 * value2;
            break;
        case 4:
            if (value2 == 0)
            {
                throw std::runtime_error("DIVIDE BY 0 Error!\n");
            }

            total = value1 / value2;
            break;
    }

    return total;
}

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/add/<double>/<double>").methods("GET"_method)([](const crow::request& req, double value1, double value2) {
        double result = calculationResult(value1, value2, 1);
        std::ostringstream oss;
        oss << "Result: " << result;
        return crow::response(oss.str());
    });

    CROW_ROUTE(app, "/subtract/<double>/<double>").methods("GET"_method)([](const crow::request& req, double value1, double value2) {
        double result = calculationResult(value1, value2, 2);
        std::ostringstream oss;
        oss << "Result: " << result;
        return crow::response(oss.str());
    });

    CROW_ROUTE(app, "/multiply/<double>/<double>").methods("GET"_method)([](const crow::request& req, double value1, double value2) {
        double result = calculationResult(value1, value2, 3);
        std::ostringstream oss;
        oss << "Result: " << result;
        return crow::response(oss.str());
    });

    CROW_ROUTE(app, "/divide/<double>/<double>").methods("GET"_method)([](const crow::request& req, double value1, double value2) {
        double result = calculationResult(value1, value2, 4);
        std::ostringstream oss;
        oss << "Result: " << result;
        return crow::response(oss.str());
    });

    app.port(8080).multithreaded().run();
    return 0;
}

